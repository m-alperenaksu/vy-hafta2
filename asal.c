// Girilen bir sayının asal olup olmadığını kontrol eden program.

#include <stdio.h>

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    int asalMi = 1;
    for(int i = 2; i <= (sayi/2); i++){ // Bir sayıyı, sayının yarısından daha büyük bir sayı bölemez. Bu yüzden döngüyü
        if(sayi % i == 0){              // (sayı/2)'e kadar sınırladık.
            asalMi = 0;
            break;
        }
    }

    if(asalMi) printf("Girmis oldugunuz sayi asaldir.");
    else printf("Girmis oldugunuz sayi asal degildir.");

    return 0;
}