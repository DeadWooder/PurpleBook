//#define __LOCAL
//#define __DEBUG

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
    freopen("output.txt", "w", stdout); 
#endif

    int n = 0; 
    int minNum, maxNum; 
    float averNum = 0.0; 
    int temp; 
    while ( scanf("%d", &temp)!=EOF ){
        ++n;
        if ( n==1 ) {
            minNum = maxNum = temp; 
            averNum = (float)temp;
            continue; 
        }
#ifdef __DEBUG
        printf("%d %d %.3f\n", minNum, maxNum, averNum); 
#endif
        minNum = min(minNum, temp); 
        maxNum = max(maxNum, temp); 
        averNum += (float)temp; 
    }
    if ( !n ) {
        printf("0 0 0\n");
    }
    else { 
        averNum /= (float)n; 
        printf("%d %d %.3f\n", minNum, maxNum, averNum); 
    }
    return 0; 
}
/*
2 8 3 5 1 7 3 6
*/