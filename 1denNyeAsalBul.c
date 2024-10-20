// 1'den N'ye kadar olan asal sayıları yazdıran program.

#include <stdio.h>

int asalMi(int x){
    int asallik = 1;
    for(int i = 2; i <= x/2; i++){ // Bir sayının en büyük tam böleni kendisinin yarısı olabilir. Bu yüzden (x/2)'den büyük sayıları test etmek performan kaybına sebep olur.
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