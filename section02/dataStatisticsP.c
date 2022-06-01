//#define __LOCAL

#include <stdio.h>
#include <math.h>

int min(int a, int b){
    return a>b ? b : a; 
}
int max(int a, int b){
    return a>=b ? a : b; 
}

int main(){

#ifdef __LOCAL    
    freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
#endif

    int n; 
    int minNum, maxNum; 
    float averNum; 
    int temp; 

    while ( 1 ) {
        scanf("%d", &n); 
        if ( !n ) break; 

        scanf("%d", &temp); 
        minNum = maxNum = temp; 
        averNum = (float)temp / n;
        for ( int i = 1 ; i < n ; ++i ) {
            scanf("%d", &temp); 
            minNum = min(minNum, temp); 
            maxNum = max(maxNum, temp); 
            averNum += (float)temp / n; 
        }
        printf("%d %d %.3f\n", minNum, maxNum, averNum); 
    }
    return 0; 
}
/*
8
2 8 3 5 1 7 3 6
4
-4 6 10 0
0
*/