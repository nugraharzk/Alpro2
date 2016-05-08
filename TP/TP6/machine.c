/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [JADKOS15], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//machine.c
//mesin program untuk main

#include "header.h"

void irisan(int x, kuliah cari[], int mulai, int selesai){
	int temp = cari[x].hari;	//memindahkan nilai hari ke temporary
	for(j = mulai-7; j < selesai-7; j++){
		matriks[temp-1][j] = 1;		//menimpa isi matriks menjadi sedang kuliah :D
	}
}

void cari(){
	int atas[5]={0};	//batas atas
	int bawah[5]={0};	//batas bawah
	int penanda=0;	//penanda irisan waktu
	for(i = 0; i < 5; i++){
		for(j = 0; j < 11; j++){
			if((matriks[i][j] == 0 && matriks[i][j-1] == 1) || (matriks[i][j] == 0 && j == 0)){
				penanda = 1;	//penanda bahwa ada irisan jadwal
				atas[i] = j+7;	//mengisi jadwal irisan kosong pertama
			}
			if(j == 10 && matriks[i][j] == 0){
				bawah[i] = j+8;	//mengisi jadwal irisan kosong terakhir
			}
		}
	}
	if(penanda == 0){
		printf("Tidak ada irisan jadwal.\n");	//tampilkan ini jika memang tidak ada irisan
	}else{	//jika ada, tampilkan yang ada irisannya
		if(atas[0] != 0){
			printf("Senin %d.00 - %d.00\n", atas[0], bawah[0]);
		}
		if(atas[1] != 0){
			printf("Selasa %d.00 - %d.00\n", atas[1], bawah[1]);
		}
		if(atas[2] != 0){
			printf("Rabu %d.00 - %d.00\n", atas[2], bawah[2]);
		}
		if(atas[3] != 0){
			printf("Kamis %d.00 - %d.00\n", atas[3], bawah[3]);
		}
		if(atas[4] != 0){
			printf("Jumat %d.00 - %d.00\n", atas[4], bawah[4]);
		}
	}
}