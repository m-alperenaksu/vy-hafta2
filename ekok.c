// Girilen iki sayının EKOK'unu bulan program.

#include <stdio.h>

int main(){
    int sayi1, sayi2, buyukSayi, ekok;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if(sayi1 > sayi2) buyukSayi = sayi1;
    else buyukSayi = sayi2;

    for(int i = buyukSayi; i <= (sayi1 * sayi2); i++){
        if((i % sayi1 == 0) && (i % sayi2 == 0)){
            ekok = i;
            break;
        }
    }
    printf("Girmis oldugunuz sayilerin EKOK'u = %d", ekok);
    return 0;
}