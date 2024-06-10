#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main() {

         int a[MAX_SIZE],b[MAX_SIZE];
    int m,n,i,j;
    int suma=0,sumb=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
   for(i=0;i<m;i++)
    {
      suma +=a[i];
    }
    for(j=0;j<m;j++)
    {
      sumb +=b[j];
    } 
    if((suma == sumb)&& (m==n))
    {printf("Same");}
    else {printf("Not Same");}
    return 0;
}
