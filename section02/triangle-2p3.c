#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n); 
    for ( int i = 0 ; i < n ; ++i ) {
        int j = i;
        while ( j-- ) printf(" ");
        j = (n-i)*2 - 1; 
        while ( j-- ) printf("*");  
        printf("\n"); 
    }
    return 0; 
}