#include <stdio.h>//Operators - Splitting into the teams
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int friends,team,a,l;
    scanf("%d\n%d",&friends,&team);
    a=friends/team;
    l= friends - (a*team);
    
    
printf("The number of friends in each team is %d and left out is %d",a,l);
    
    return 0;
}
