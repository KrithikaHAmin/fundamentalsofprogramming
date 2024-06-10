#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,a[10][10],b[10][10];    
    scanf("%d",&n);
  
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d\t",&a[i][j]);
        }
    } 
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
printf("Transpose matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j] =a[j][i];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
