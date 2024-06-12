#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int fp,sp,ap,fd,sd,ad,fs,ss,as;
    float flipkart,snapdeal,amazon;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",&fp,&fd,&fs,&sp,&sd,&ss,&ap,&ad,&as);
    flipkart = fp-(fp*((float)fd/100))+fs;
    snapdeal = sp-(sp*((float)sd/100))+ss;
    amazon = ap-(ap*((float)ad/100))+as;
    printf("In Flipkart: Rs.%.0f",flipkart);
    printf("\nIn Snapdeal: Rs.%.0f",snapdeal);
    printf("\nIn Amazon: Rs.%.0f",amazon);
    
    if((flipkart<=snapdeal)&&(flipkart<=amazon)){
        printf("\nChoose Flipkart");

    }
    else if((snapdeal<=flipkart)&&(snapdeal<=amazon)){
         printf("\nChoose Snapdeal");
    }
    else{
        printf("\nChoose Amazon");
    }
    return 0;
}
