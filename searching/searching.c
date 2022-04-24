/*Nama File : searching.c*/
/*Deskripsi : Membuat program senquential search*/
/*Nama      : Yoda Rachman Nur Sahid*/
/*NIM       : 24060121140170*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "searching.h"


int main()
{
    // Kamus
    int A[10] = {1,3,5,7,6,4,10,30,20.40};
    int N = sizeof(A)/ sizeof(A[0]);
    int X = 11;
    int K;

    // Algoritma
    printf("Mencari harga X dalam tabel T (tanpa boolean) \n");

    SEQSearchX1(A, N, &K, X);
    if(K != -1){
        printf("X ditemukan di index ke- %d\n", K);
        if(X < 0){
            printf("X merupakan bilangan negatif \n");
        }
        else{
            printf("X merupakan bilangan positif \n");
        }
    }
    else{
        printf("X tidak ditemukan \n");

    }
    return 0;
}
