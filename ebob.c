// Girilen iki sayının EBOB'unu bulan program.

#include <stdio.h>

int main(){
    int sayi1, sayi2, kucukSayi, ebob;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if(sayi1 > sayi2) kucukSayi = sayi2;
    else kucukSayi = sayi1;

    for(int i = kucukSayi; i >= 1; i--){
        if((sayi1 % i == 0) && (sayi2 % i == 0)){
            ebob = i;
            break;
        }
    }
    printf("Girdiginiz sayilarin EBOB'u = %d", ebob);
    return 0;
}