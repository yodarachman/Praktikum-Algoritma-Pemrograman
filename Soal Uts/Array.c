/*Nama File : Array.c*/
/*Deskripsi : Menghitung penjumlahan sub array*/
/*Nama      : Yoda Rachman Nur Sahid*/
/*NIM       : 24060121140170*/

#include <stdio.h>

int main(){
    /*Kamus*/
    int N, i, r, sum;

    /*Algoritma*/
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &N);
    int T[N];
    sum = 0;

    for (i = 0; i < N; i++)
    scanf("%d", &T[i]);

    for (i = 0; i < N; i++) {
        printf("(");
        for (r = i; r < N; r++) {
            sum += T[r];
            if (r != N-1) printf("%d + ", T[r]);
            else printf("%d", T[r]);
        }
        if (i != N-1) printf(") + ");
        else printf(")");
    }
    printf("\nJumlah dari array dan subarray adalah: %d", sum);
    return 0;
}
