#include <stdio.h>

// add long long variable
// long long format string is %lld or %I64d in windows platform

int main(){
    long long n;
    int num = 0; 
    scanf("%lld", &n); 
    while ( n > 1 ) {
        ++num; 
        if ( n % 2 ) {
            // only temp variable can over int32_t
            n = 3*n + 1; 
        }
        else {
            n /= 2; 
        }
    }
    printf("%d\n", num); 
    return 0; 
}