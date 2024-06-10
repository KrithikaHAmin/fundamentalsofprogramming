#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,m,n;
    float loc1,loc2;
    scanf("%d\n%d\n%d\n%d",&a,&b,&m,&n);
    loc1 = (float)(a+m)/2;
    loc2 = (float)(b+n)/2;
    printf("Arun's house is located at(%.1f,%.1f)",loc1,loc2);
    
    return 0;
}
