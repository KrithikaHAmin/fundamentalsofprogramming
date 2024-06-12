#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int year,month;
    scanf("%d\n%d",&year,&month);
    if(((year > 1900)&&(year < 9999)) && ((month>0) && (month<13))){
    if(((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))&& (month==2))
        printf("29 Days");
         
    else if(((month<8)&&(month !=2)) && (month%2 !=0))
        printf("31 Days");
    else if(month == 2)  
        printf("28 Days");
    else if((month>7) && (month%2 == 0))    
        printf("31 Days");
        else 
            printf("30 Days");
        }
    else
       printf("0");
    return 0;
}
