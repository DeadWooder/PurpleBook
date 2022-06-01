#include <stdio.h>
int main(){
    float f; 
    scanf("%f", &f); 
    float c = (f - 32) /9.0 *  5.0; 
    printf("%.3f\n", c); 
    return 0; 
}