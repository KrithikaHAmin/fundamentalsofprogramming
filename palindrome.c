#include <stdbool.h>
#include <stdio.h>

struct Solution {
    
    bool isPalindrome(int x) {
        // Negative numbers 
        if (x < 0) {
            return false;
        }

        // Find the reverse of the number
        int original = x;
        long reversed = 0;

        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

    
        return reversed == original;
    }
};
