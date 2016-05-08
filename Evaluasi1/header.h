/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [EVBI16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//header.h
//merupakan daftar isi dari program

#include <stdio.h>
#include <string.h>

typedef struct{		//bungkusan angka
	char biner[9];
	int desimal;
}angka;

int i,j;	//deklarasi indeks

int hitung(char array[]);	//deklarasi menghitung biner ke desimal
void insertionsorting(int x, angka array[]);	//sorting
void urutkan(int x, int y, angka array1[], angka array2[], angka hasil[]);	//merging
void tampil(int x, int cari, angka daftar[]);	//menampilkan hasil