#include <stdio.h>
int p(int a){
    return a*a*a; 
}
int main(){
    int a, b, c; 
    for ( int i = 100 ; i < 1000 ; ++i ) {
        a = i/100; b = i/10%10; c = i%10; 
        int temp = p(a) + p(b) + p(c); 
        if ( temp == i ) {
            printf("%d\n", i); 
        }
    }
    return 0; 
}