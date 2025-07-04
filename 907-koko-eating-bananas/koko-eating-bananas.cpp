class Solution {
public:   
    int minEatingSpeed(vector<int>& piles, int h) {
    // piles = [3,6,7,11], h = 8

    int left = 1;
    int right = *max_element(piles.begin(), piles.end()); // max pile size (n)

    while (left < right) {
        int speed = (left + right) / 2;

        // O(log(max(n))) binary search
        int hs = 0; // total hours spent

        // O(n) loop to compute hours for this speed
        for (auto i : piles)
            hs += i / speed + (i % speed != 0); // ceil(i / speed)

        if (hs <= h) {
            // ✅ If this speed works, try to reduce it
            // All speeds from 'speed' to 'right' are valid
            // So check lower speeds ⇒ right = speed
            right = speed;
        } else {
            // ❌ If it takes too long, try faster speed
            left = speed + 1;
        }
    }

    // left == right is the minimum working speed
    return right;
}

};