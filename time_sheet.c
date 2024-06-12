#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int s,m,t,w,th,f,sa,salary,mon,tu,wed,thr,fr,sat,sun;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d",&s,&m,&t,&w,&th,&f,&sa);
    if (m>8) 
            mon= 8 * 100 + (m - 8) * (115);
    else 
            mon = m*100;
        
    if (t>8) 
            tu= 8 * 100 + (t - 8) * (115);
    else 
            tu = t*100;
        
    if (w>8) 
            wed= 8 * 100 + (w - 8) * (115);
    else 
            wed = w*100;
        
    if (th>8) 
            thr= 8 * 100 + (th - 8) * (115);
    else 
            thr = th*100;
    
    if (f>8) 
            fr= 8 * 100 + (f - 8) * (115);
     else 
            fr = f*100;
    

    sat = sa*100;
    sat= sat*125/100;
    sun=s*100;
    sun=sun*150/100;
    
    salary = mon+tu+wed+thr+fr+sat+sun;
     printf("%d",salary);   
    return 0;
}
