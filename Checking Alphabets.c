   #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c;
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z') ){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
         printf("Vowel");}
        else{
            printf("Consonant");
        }
    
    }
 else{
     printf("Not an alphabet");
}
     


    return 0;
}    

