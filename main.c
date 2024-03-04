/** EL2208 Praktikum Pemecahan Masalah dengan C 2023/2024
 *   Modul               : 02
 *   Hari dan Tanggal    : Senin, 4 Maret 2024
 *   Nama (NIM)          : Naufal Afiq Muzaffar (13222025)
 *   Nama File           : main.c
 *   Deskripsi           : 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

// Fungsi untuk membalikkan representasi bilangan bulat
int reverseBilangan(int* bilangan) {

    int Xaksen;
    int kurang0=0;
    char strX[15]={};
    char strX2[15]={};
    int i=0;
    int kondisi = 0;

    sprintf(strX, "%d", *bilangan);
    while (kondisi != 1){
        if((strX[strlen(strX)-i-1]) == '0'){
            kurang0 = kurang0 +1;
            i = i+1;
        }
        else{
            kondisi = 1;
        }
        
    }

    for ( i = 0; i < (strlen(strX)-kurang0); i++){
        strX2[i] = strX[strlen(strX)-kurang0-i-1];
    }

    *bilangan = atoi(strX2);

}

// Fungsi untuk mendapatkan faktorisasi prima dari suatu bilangan
// void faktorisasiPrima(int *angka) {
//     // isi dengan program untuk mencari faktorisasi prima dari C
//     // silahkan lengkapi parameter fungsi ini
    
// }

int main() {
    int A;
    int B;
    int C;
    int k;
    int j;
    int kondisi1 =0;
    int kondisi2 = 0;
    int primaterbesar;
    int cekprima = 0;

    // Meminta input dari pengguna

    printf("Masukkan bilangan A: ");
    scanf("%d", &A);
    printf("Masukkan bilangan B: ");
    scanf("%d", &B);

    while (kondisi1 ==0 || kondisi2 ==0){
        if (A <=0){
            printf ("\nBilangan yang Anda masukkan bernilai 0\n");
            printf("Masukkan bilangan A: ");
            scanf("%d", &A);
        }
        else{
            kondisi1 =1;
        }

        if (B <=0){
            printf ("\nBilangan yang Anda masukkan bernilai 0\n");
            printf("Masukkan bilangan B: ");
            scanf("%d", &B);
        }
        else{
            kondisi2 = 1;
        }
    }


    // Membalik representasi desimal A dan B menggunakan pointer
    reverseBilangan(&A);
    reverseBilangan(&B);

    // printf("%d\n", A);
    // printf("%d\n", B);
    // Menjumlahkan A' dan B' untuk mendapatkan C
    C = A + B;
    printf("\nBilangan C adalah %d\n",C);
    printf("Faktorisasi prima dari %d = ", C);

    int i=j=0;

    while (C!=1){
        j=0;
        for (j=2; j<C+1; j++){
            if (((C)%j)==0){
                cekprima +=1;
            }
            if ((cekprima == 1) && (j>=2) && (j<=C) && ((C%j)==0)){
                primaterbesar = j;
            }

            if (j == C){
                C = C/primaterbesar;
                if (C!=1){
                    printf("%d ", primaterbesar);
                    printf("x ");
                }
                else{
                    printf("%d", primaterbesar); 
                }
            }
        }
        cekprima=0;

    }


    // Mendapatkan faktorisasi prima dari C menggunakan pointer
return 0;
}
