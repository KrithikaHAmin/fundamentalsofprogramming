#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int total_coins, ben_percentage, blackbeard_percentage;
    int ben_share, blackbeard_share, pirates_share;
    int remaining_coins;

    // Input the total number of gold coins and the percentages
    scanf("%d %d %d", &total_coins, &ben_percentage, &blackbeard_percentage);

    // Calculate Long Ben's share
    ben_share = (ben_percentage * total_coins) / 100;

    // Calculate Blackbeard's share from the remaining coins after giving Ben's share
    remaining_coins = total_coins - ben_share;
    blackbeard_share = (blackbeard_percentage * remaining_coins) / 100;

    // Calculate the share for the other 3 pirates equally
    pirates_share = (remaining_coins - blackbeard_share) / 3;

    // Output the shares
    printf("%d\n", ben_share);
    printf("%d\n", blackbeard_share);
    printf("%d\n", pirates_share);

    return 0;
}
