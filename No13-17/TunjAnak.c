
// Nama         : Yoda Rachman Nur Sahid
// NIM          : 24060121140170
// Tanggal      : 16 Maret 2022
// Nama Program : TunjAnak.c
/* Deskripsi    : menampilkan besarnya tunjangan anak yang diberikan berdasarkan jumlah anak dengan jumlah maksimal yang ditanggung adalah 3 anak*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int anak,gaji, tunjangan;

    /*Algoritma*/
    printf("Masukkan jumlah anak yang dimiliki : ");
    scanf("%d",&anak);
    printf("Masukkan jumlah gaji : ");
    scanf("%d", &gaji);
    if(anak>= 0 && gaji>0){
        if(anak<3){
            tunjangan = anak * 10 * gaji / 100;
            printf("%d",tunjangan);
        }
        else{
            tunjangan = 3 * 10 * gaji / 100;
            printf("%d",tunjangan);
        }
    }
    else{
        printf("Angka yang dimasukkan tidak valid");
    }
    return 0;
}
