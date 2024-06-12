#include <stdio.h>

struct Solution {
    
    double myPow(double x, int n) {
        if (n == 0) return 1;

        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1;
        double current_product = x;

        while (N > 0) {
            if (N % 2 == 1) {
                result *= current_product;
            }
            current_product *= current_product;
            N /= 2;
        }

        return result;
    }
};