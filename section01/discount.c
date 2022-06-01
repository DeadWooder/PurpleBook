#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n); 
    float value = n * 95.0; 
    if (value >= 300) value *= 0.85; 
    printf("%.2f\n", value); 
    return 0; 
}