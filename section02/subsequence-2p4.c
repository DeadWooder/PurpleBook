//#define __LOCAL

#include <stdio.h>
#include <math.h>

int main(){
#ifdef __LOCAL
    freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
#endif

    int n, m;
    int Case = 1;
    double sum;   
    while ( scanf("%d%d", &n, &m)==2 && n && m ) {
        sum = 0.0; 
        for ( int i = n ; i <= m ; ++i ) {
            sum += (1.0/i) * (1.0/i); 
            //sum += 1.0/(i*i); error
        }
        printf("Case %d: %.5lf\n", Case++, sum); 
    }
    return 0; 
}
/*
2 4
65536 655360
0 0
*/