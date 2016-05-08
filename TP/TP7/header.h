/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan 				   //
// [TP7 - Hitung hitung ip ceria], jika saya melakukan kecurangan maka Allah/Tuhan     //
// adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.				   //
/////////////////////////////////////////////////////////////////////////////////////////

//header.h
//merupakan daftar isi dari program

#include <stdio.h>
#include <string.h>

typedef struct{
	char nim[10];
	char nama[25];
	float nilai;
	int sks;
	float ip;
}sino;

sino arr1[64];	//bungkusan input pertama
sino arr2[64];	//bungkusan input kedua
sino arr3[64];	//bungkusan hasil akhir

int index1,index2;	//indeks array pertama dan kedua
int i,j;	//iterasi

void readfilefirst(sino array[64]);		//prosedur memindahkan file pertama ke array pertama
void readfilesecond(sino array[64]);	//prosedur memindahkan file kedua ke array kedua
void insertionsorting(int x, sino array[]);		//prosedur sorting untuk kedua bungkusan
void urutkan(int x, int y, sino array1[], sino array2[], sino hasil[]);		//prosedur mengurutkan dan merging keduanya
void flushtofile(sino array[64]);	//prosedur flush ke file sequential