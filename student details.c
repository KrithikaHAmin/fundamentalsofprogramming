#include <stdio.h>
#include <math.h>

int main() {
    int age;
    float cgpa,k;
    char name[1][100];
    int size = 1;
    char grade[2];

    // Input for the name
    for (int i = 0; i < size; i++) {
        scanf("%s", name[i]);
    }

    // Input for age and cgpa
    scanf("%d %f", &age, &cgpa);

    // Input for grade
    scanf("%s", grade);

    // Truncate cgpa to two decimal places
  
    k=(float)((int)(cgpa * 100)) / 100;

    // Output the values
    printf("Name: %s\nAge: %d\nCGPA: %.2f\nGrade: %s\n", name[0], age, k, grade);

    return 0;
}