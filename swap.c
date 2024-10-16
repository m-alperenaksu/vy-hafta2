#include <stdio.h>

void swap_byvalue(int a, int b){
    int c = a;
    a = b;
    b = c;
}

void swap_byreference(int * a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int x = 5, y = 7;
    swap_byvalue(x,y);
    printf("a = %d, b = %d\n", x, y);
    swap_byreference(&x,&y);
    printf("a = %d, b = %d", x, y);
    return 0;
}