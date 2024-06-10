#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float pa,ri,years;
    float s,ta,dis,fin;
   scanf("%f%f%f",&pa,&ri,&years);
    s = (pa*ri*years)/100;
    printf("%.2f",s);
    ta=s+pa;
    printf("\n%.2f",ta);
    dis = 0.02 * s;
    printf("\n%.2f",dis);
    fin= ta - dis;
    printf("\n%.2f",fin);
     
    
    
    
    
      
    return 0;
}
