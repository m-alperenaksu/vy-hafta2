// 1'den N'ye kadar olan asal sayıları yazdıran program.

#include <stdio.h>

int asalMi(int x){
    int asallik = 1;
    for(int i = 2; i < x; i++){
        if (x % i == 0){
            asallik = 0;
            break;
        }
    }
    return asallik;
}

int main(){
    int N;
    printf("Bir N degeri giriniz: ");
    scanf("%d", &N);

    for(int i = 2; i <= N; i++){
        if(asalMi(i)) printf("%d\n", i);
    }
    return 0;
}