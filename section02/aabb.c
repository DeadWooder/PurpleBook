#include <stdio.h>
#include <stdbool.h>

bool perfectSquare(int n){
    int i = 1; 
    while ( n > 0 ) {
        n -= i; 
        i += 2; 
    }
    return n == 0 ? true : false; 
}

int main(){ 
    int n;
    for ( int i = 1 ; i < 10 ; ++i ) {
        for( int j  = 0 ; j < 10 ; ++j ) {
            n = i*1100 + j*11; 
            if ( perfectSquare(n) ) { 
                printf("%d\n", n); 
            }
        }
    }
    return 0; 
}