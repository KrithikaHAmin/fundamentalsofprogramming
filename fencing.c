#include <stdio.h>//Operators - Fencing the Ground
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int l,b,rl,a;
    scanf("%d\n%d",&l,&b);
    rl= 2*(l+b);
    a=l*b;
    printf("The required length is %d m",rl);
    printf("\nThe required area of carpet is %d sqm",a);
    
    return 0;
}
