#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[15],n,i,j;
    int sume=0,sumo=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(j=0;j<n;j++){
        if((a[j]%2)==0){
            sume += a[j];}
            else{
                sumo += a[j];
            }
        
    }
    printf("The sum of the even numbers in the array is %d",sume);
    printf("\nThe sum of the odd numbers in the array is %d",sumo);
 
    return 0;
}
