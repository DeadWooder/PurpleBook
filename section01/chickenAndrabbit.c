#include <stdio.h>
int main(){
    int n, m; 
    scanf("%d%d",&n, &m); 
    int y, x; 
    y = (m-2*n)/2; 
    x = n - y; 
    if ( m%2 || x < 0 || y < 0) {
        printf("No answer\n"); 
    }
    else {
        printf("%d %d\n", x, y); 
    }
    return 0; 
}