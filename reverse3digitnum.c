#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n,f,m,l,num;
    scanf("%d",&n);
    f= n/100;
    l=n%10;
    m=(n/10)-(f*10);
    num=(l*100)+(m*10)+f;
    printf("%d",num);
    
    
    return 0;
}
