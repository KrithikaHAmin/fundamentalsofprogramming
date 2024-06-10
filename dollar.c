#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,c,d,dol,cen;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    dol=a+c;
    if((b+d)>100)
    {
        dol +=1;
        cen= (b+d)-100;
        
    }
    else{
        cen = b +d;
    }
    printf("%d\n%d",dol,cen);
    return 0;
}
