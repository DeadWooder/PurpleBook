#include <stdio.h>
#include <math.h>
float Pi = acosf(-1.0); 
int main(){
    float a; 
    scanf("%f", &a); 
    a = a / 180.0 * Pi;  
    printf("cos(n)=%f sin(n)=%f\n", cos(a), sin(a)); 
    return 0; 
}