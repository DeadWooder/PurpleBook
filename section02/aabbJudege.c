#include <stdio.h>
int main(){
    for ( int i = 1 ; ; ++i ) {
        int n = i*i; 
        if ( n > 10000 ) break; 
        if ( n > 1000 ) {
            int a, b, c, d; 
            a = n/1000; n %= 1000; 
            b = n/100;  n %= 100; 
            c = n/10;   n %= 10; 
            d = n; 
            if ( a == b && c == d ) {
                printf("%d ^= %d\n", i, i*i); 
            }
        }
    }
    return 0; 
}