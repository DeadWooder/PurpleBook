#include <stdio.h>
#include <math.h>
int main(){
    double ans = 0.0; 
    double denomintor = 1.0; 
    int t = 0; 
    double temp = 1.0/denomintor; 
    for ( ; fabs(temp) >= 1e-6 ; t^=1 ) {
        ans += temp;
        denomintor = denomintor + 2.0;  
        temp = 1.0/denomintor * (t%2 ? 1.0 : -1.0); 
    }
    printf("Pi/4 = %lf, Pi = %lf\n", ans, ans*4.0); 
    return 0; 
}