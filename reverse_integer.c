#include <limits.h>

int reverse(int x) {
    // Extract sign
    int sign = (x < 0) ? -1 : 1;

    // Convert to absolute value
    long abs_x = labs(x);

    // Reverse digits
    long reversed_x = 0;
    while (abs_x != 0) {
        int digit = abs_x % 10;
        reversed_x = reversed_x * 10 + digit;
        abs_x /= 10;
    }

    // Check if reversed integer is within the range
    if (reversed_x > INT_MAX || reversed_x < INT_MIN)
     return 0;

    // Apply sign
    reversed_x *= sign;

    return (int)reversed_x;
}