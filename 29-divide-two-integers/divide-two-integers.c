#include <limits.h>

int divide(int dividend, int divisor) {
    // Handle overflow edge case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    return dividend / divisor;
}
