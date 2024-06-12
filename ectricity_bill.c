#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    float u;
    scanf("%d",&a);
    if(a<=200)
      u=a*0.5;  
    else if(a>200 && a<=400)
        u=(a*0.65)+100;
    else if(a>400 && a<=600)
        u=(a*0.80)+200;
    else
        u=(a*1.25)+425;
    
    printf("Rs.%.0f",u);
    return 0;
}
  

