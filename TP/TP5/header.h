/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [TMPBD16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//header.h
//merupakan daftar isi dari program

#include <stdio.h>
#include <string.h>

typedef struct{		//bungkusan data
	char biner[11];
	int desimal;
}data;

int i,j,k;	//deklarasi indeks

int hitung(char array[]);	//deklarasi menghitung biner ke desimal
void getSuspicious(int x, int y, int z, data big1[], data big2[], data big3[]);
void insertionsorting(int x, data array[]);	//sorting
void urutkan(int x, int y, data array1[], data array2[], data hasil[]);	//merging
void tampil(int x, data daftar[]);	//menampilkan hasil