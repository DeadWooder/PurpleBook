#include <stdio.h>

int main(){
    int a, b, c; 
    int Case = 1; 
    while ( scanf("%d%d%d", &a, &b, &c)!=EOF ) {
        int ans = a*70 + b*21 + c*15; 
        ans %= 105; 

        printf("Case %d: ", Case++); 
        if ( ans < 10 || ans > 100 ) {
            printf("No answer\n"); 
        }
        else {
            printf("%d\n", ans);
        }
    }
    return 0; 
}