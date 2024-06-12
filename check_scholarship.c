#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int age, year, income, arrears;
    float marks, attendance;
    
    // Input
    scanf("%d %d %d %d %f %f", &age, &year, &income, &arrears, &marks, &attendance);

    // Check eligibility
    if (year >= 2021 && age >= 18 && age < 21) {
        if (arrears <= 2 && marks >= 60 && income < 200000 && attendance >= 80)
        {
            printf("Eligible\n");
        }
        else if (arrears > 2 && marks >= 80 && income <= 250000 && attendance >= 90 && income >= 200000) 
                printf("Partially Eligible\n");
        else
            printf("Not Eligible");
    }
    else
        printf("Not Eligible\n");
    return 0;
}