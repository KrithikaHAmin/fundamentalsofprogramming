#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,f,m;
    scanf("%d",&n);
    if((n>=100)&&(n<=999)){
    f=n/100;
    m=(n/10)-(f*10);
    if((m%3)==0)
        printf("Trendy Number");
    else
        printf("Not a Trendy Number");}
    else
        printf("Invalid Number");
    return 0;
}