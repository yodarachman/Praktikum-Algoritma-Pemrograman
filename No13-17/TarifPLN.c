// Nama         : Yoda Rachman Nur Sahid
// NIM          : 24060121140170
// Tanggal      : 16 Maret 2022
// Nama Program : TarifPLN.c
/* Deskripsi    : menampilkan besarnya tarif listrik dari 2 golongan dengan ketentuan pemakaian minimal adalah 100 kWh dan untuk pemakaian 1000kWH dan diatasnya akan dikenakan tambahan biaya sebesar 10% dari total pembayaran*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int gol,pemakaian;

    /*Algoritma*/
    printf("Masukkan golongan listrik : ");
    scanf("%d",&gol);
    printf("Masukkan jumlah pemakaian dalam KWH : ");
    scanf("%d", &pemakaian);
    if(gol == 1){
        if(pemakaian > 0 && pemakaian <= 100){
            printf("%d",100*1000);
        }
        else if (pemakaian > 100 && pemakaian < 1000){
            printf("%d",pemakaian*1000);
        }
        else if (pemakaian>=1000){
            printf("%d", pemakaian*1000 + (pemakaian*1000*10/100));
        }
        else{
            printf("Angka pemakaian harus diatas 0 KWH");
        }
    }
    else{
        if(pemakaian > 0 && pemakaian <= 100){
            printf("%d",100*2000);
        }
        else if (pemakaian > 100 && pemakaian < 1000){
            printf("%d",pemakaian*2000);
        }
        else if (pemakaian>=1000){
            printf("%d", pemakaian*2000 + (pemakaian*2000*10/100));
        }
        else{
            printf("Angka pemakaian harus diatas 0 KWH");
        }
    }
    return 0;
}
