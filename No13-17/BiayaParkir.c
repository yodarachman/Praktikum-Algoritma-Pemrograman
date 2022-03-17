// Nama         : Yoda Rachman Nur Sahid
// NIM          : 24060121140170
// Tanggal      : 16 Maret 2022
// Nama file    : BiayaParkir.c
// Deskripsi    : menampilkan besar biaya parkir berdasarkan lamanya parkir

#include <stdio.h>
#include <stdlib.h>
int main(){
    //Kamus
    int t,biaya;
    char inisial;

    //Algoritma
    printf("Masukkan lama waktu parkir : ");
    scanf("%d",&t);
    if (t = 0){
        biaya = 0;
        printf("%d",biaya);
    }
    else (t <= 2){
        biaya = 2000;
        printf("%d",biaya);
    }
     else (t > 2) {
        biaya = 2000 + ((t-2)*500);
        printf("%d",biaya);
    }
    return 0;
}

