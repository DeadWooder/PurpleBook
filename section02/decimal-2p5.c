#define __LOCAL
#include <stdio.h>

int main(){
    int a, b, c; 
    int Case = 1;  
    while ( scanf("%d%d%d", &a, &b, &c)==3 && a && b && c ) { 
        printf("Case %d: %d", Case++, a / b); 
        if ( c ) printf("."); 
        while ( --c ) {
            a = a % b; 
            a *= 10; 
            printf("%d", a/b); 
        }
        a %= b; a *= 10; 
        int lastNum = a/b; 
        
        a %= b; a *= 10;
        if ( a / b >= 5 ) lastNum++;

        printf("%d\n", lastNum); 
    }
    return 0; 
}