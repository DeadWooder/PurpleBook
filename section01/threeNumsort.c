//#define swap(x,y) {int _swap(x)(y); _swap(x)(y)=x;x=y;y=_swap(x)(y);}
#include <stdio.h>

void swap(int *a, int *b){int t; t = *a; *a = *b; *b = t;}
int main(){
    int a, b, c; 
    scanf("%d%d%d", &a, &b, &c); 
    if (a > b) swap(&a, &b); 
    if (a > c) swap(&a, &c); 
    if (b > c) swap(&b, &c); 
    
    printf("%d %d %d\n", a, b, c); 
    return 0; 
}