//#define __LOCAL

#include <stdio.h> 
#include <stdbool.h>
#include <time.h>

bool judgeNme(unsigned int *fl, int a){
   if ( *fl & (1<<a) ) {
       return true; 
   }
   *fl ^= (1<<a); 
   return false; 
}

bool resloveNum(unsigned int *fl, int a){
    while ( a ) {
        if ( judgeNme(fl, a%10) ) return true; 
        a /= 10; 
    }
    return false; 
}

int main(){
    int a, b, c;
    unsigned int flage; 
    for ( int i = 100 ; 3*i < 1000 ; ++i ) {
        a = i; b = 2*i; c = 3*i;
        flage = 0; 
        if ( resloveNum(&flage, a) ) continue;
        if ( resloveNum(&flage, b) ) continue;
        if ( resloveNum(&flage, c) ) continue;
        printf("%d %d %d\n", i, 2*i, 3*i); 
    }
#ifdef __LOCAL
        printf("Tmie used %.2lf\n", (double)clock() / CLOCKS_PER_SEC); 
#endif
    return 0; 
}