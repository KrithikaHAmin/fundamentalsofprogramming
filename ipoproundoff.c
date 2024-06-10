#include <stdio.h>//Input & Output - Round Off
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;

    scanf("%f",&a);
    int b= (int)a;
    int rounded_up = (int)ceil(a);
    int rounded_down = (int)floor(a);
    printf("%d\n%d\n%d",b,rounded_up,rounded_down);
    return 0;
}
