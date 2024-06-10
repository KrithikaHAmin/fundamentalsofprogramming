#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int row, col;
    
   
    if (n >= 1 && n <= 3) {
        row = 0;
    } else if (n >= 4 && n <= 6) {
        row = 1;
    } else {
        row = 2;
    }
    
    col = (n - 1) % 3;
    printf("%d %d",row,col);
    return 0;
}
