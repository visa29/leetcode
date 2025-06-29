bool isPalindrome(int x) {
    if (x < 0)
        return false;

    long long s = 0;
    int temp = x;

    while (x > 0) {
        s = s * 10 + (x % 10);
        x = x / 10;
    }

    return temp == s;
}
