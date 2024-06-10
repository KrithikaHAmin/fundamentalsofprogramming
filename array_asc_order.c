#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int* xp,int* yp){
    int temp = *xp;
    *xp =*yp;
    *yp = temp;
}
int main() {
int numbers[100],size,m;
//read size
    scanf("%d",&size);

//read numbers
    for(m=0;m<size;m++){
        scanf("%d",&numbers[m]);
    }

for(int i=0;i<(size-1);i++){         // selection | passes # size-1
    int min_index=i;
    for(int j= i+1; j<size ; j++){      //comparisions
        if(numbers[j] < numbers[min_index]){
            min_index = j;
        }
    
    }
    if(i != min_index){
        swap(&numbers[i],&numbers[min_index]);
    }
}
// print sorted numbers
    printf("The Sorted array is:");
    for(m=0;m<size;m++){
        printf("\n%d",numbers[m]);
    }

    return 0;
}
