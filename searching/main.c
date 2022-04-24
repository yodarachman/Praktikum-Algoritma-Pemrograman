/*Nama File : main.c*/
/*Deskripsi : Membuat program senquential search*/
/*Nama      : Yoda Rachman Nur Sahid*/
/*NIM       : 24060121140170*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "searching.h"

void SEQSerachX1(int T[], int N, int *K, int X)
{
    //Kamus
    int i;

    //Algoritma
    i = 0;
    while(i < N-1 && T[i] != X){
        printf("%d\n", i);
        i++;
    }
    if(T[i] == X){
        *K = i;
    }
    else{
        *K = 0;
    }
}
