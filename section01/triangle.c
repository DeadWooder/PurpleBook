#include <stdio.h>

#include "triangle_sort.c"

int main(){
    int a, b, c; 
    scanf("%d%d%d", &a, &b, &c);

    threeNumsort(&a, &b, &c); 
    if ( a + b <= c ) {
        printf("not a triangle!\n"); 
        return 0; 
    }
    if ( a*a + b*b == c*c) {
        printf("yes\n"); 
    }
    else {
        printf("no\n"); 
    }
    return 0; 
}