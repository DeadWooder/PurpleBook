#include <stdio.h>
#include <time.h>

int main(){
    int n, factorialSum = 0, factorialLast = 1; 
    scanf("%d",&n); 
    for (int i = 1 ; i <= n ; ++i ) {
        factorialLast *= i;  
        factorialSum += factorialLast; 
    }
    printf("%d\n", factorialSum); 
    // print programing run time
    // echo input | .\a.exe
    printf("Time used = %.2lf\n", (double)clock() / CLOCKS_PER_SEC); 
    return 0; 
}