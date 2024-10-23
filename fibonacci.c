// Kullanıcıdan bir n sayısı alan ve Fibonacci serisin n. terimini ekrana yazdıran program.

#include <stdio.h>

int fibonacci(int x){
    if(x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonacci(x-1) + fibonacci(x-2);
}

int main(){
    int n, sonuc;
    printf("n sayisini giriniz: ");
    scanf("%d", &n);
    sonuc = fibonacci(n);
    printf("Fibonacci(%d) = %d", n, sonuc);
    return 0;
}