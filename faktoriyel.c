// Girilen bir sayının faktöriyelini hesaplayan program.

#include <stdio.h>

int faktoriyel(int a){ // Faktöriyel fonksiyonun recursive (özyinelemeli) olarak yazdık.
    if (a == 0 || a == 1){
        return 1;
    }
    else if(a > 1){
        return a * faktoriyel(a-1);
    }   
}

int main(){
    int sayi;
    printf("Sayiyi giriniz: ");
    scanf("%d", &sayi);
    printf("Faktoriyel = %d", faktoriyel(sayi));
    return 0;
}