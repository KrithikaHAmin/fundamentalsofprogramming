#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int month,rent,days;
    float pay;
    scanf("%d\n%d\n%d",&month,&rent,&days);
    if(month>0 && month<13){
    if((month>3 && month<7) || (month>10 && month<13)){
     pay=  rent*1.2*days;
       
    }
    else{
     pay = rent*days;
       
    }
         printf("%.0f",pay);
    }
    
    else{
        printf("Invalid Input");
    }
    return 0;
}
