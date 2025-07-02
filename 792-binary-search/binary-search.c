int search(int* nums, int n, int target) {
    int left = 0, right = n-1;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(nums[mid] == target)
           return mid;
        if(target > nums[mid]) // target lies in 2nd half
           left = mid+1;
        else // target lies in 1st half
           right = mid-1;
    }
    return -1;
    // TC : O(log n) => Binary Search ( O(log base 2 n))
    // SC : O(1)
}