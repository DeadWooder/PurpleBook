void swap(int *a, int *b){int t; t = *a; *a = *b; *b = t;}

void threeNumsort(int *a, int *b, int *c){
    if (*a > *b) swap(a, b); 
    if (*a > *c) swap(a, c); 
    if (*b > *c) swap(b, c); 
}