int findMin(int* a, int n) {
    // Case 1
    if (n == 1) return a[0];

    // Case 2: Already sorted, not rotated
    if (a[0] < a[n - 1]) return a[0];

    int left = 0, right = n - 1;

    while (left <= right) {
        // Tcio (log n)
        int mid = (left + right) / 2;

        // Case 3: Check if mid+1 is the minimum
        if (mid < n - 1 && a[mid] > a[mid + 1])
            return a[mid + 1];

        // Case 4: Check if mid is the minimum
        if (mid > 0 && a[mid - 1] > a[mid])
            return a[mid];

        // Case 5: Go right if mid > a[0]
        if (a[mid] >= a[0])
            left = mid + 1;
        else
            // Case 6: Go left
            right = mid - 1;
    }

    // Case 7: Not found (shouldn't happen for valid rotated array)
    return -1;
}
