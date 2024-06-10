#include <stdio.h>//Operators - The Newspaper Agency
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int copies,cpc,cop,profit;
    scanf("%d\n%d\n%d",&copies,&cpc,&cop);
    profit= (copies*cpc)-(cop*copies)-100;
    printf("%d",profit);
    return 0;
}
