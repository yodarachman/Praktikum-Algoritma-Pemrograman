/*Nama File : SelisihBesarKecil.c*/
/*Deskripsi : Menghitung selisih ketinggian terbesar dan terkecil*/
/*Nama      : Yoda Rachman Nur Sahid*/
/*NIM       : 24060121140170*/



#include <stdio.h>

int main(){
    /*Kamus*/
    int N, i, b, k;

    /*Algoritma*/
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    int H[N];

    for (i = 0; i < N; i++)
    scanf("%d", &H[i]);

    b = H[0];
    k = H[0];

    for (i = 0; i < N; i++) if (H[i] > b) b = H[i];

    for (i = 0; i < N; i++) if (H[i] < k) k = H[i];

    printf("Terbesar: %d\Terkecil: %d\nSelisihnya adalah: %d", b, k, b-k);
    return 0;
}
