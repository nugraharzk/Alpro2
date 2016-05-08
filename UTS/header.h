/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [ojeku16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//header.h
//merupakan daftar isi dari program

#include <stdio.h>
#include <string.h>

typedef struct{				//bungkusan ojek disini
	char nama_driver[64];
	char no_telp[64];
	int jam_terbang;
	double komisi;
}ojek;

int i,j;	//deklarasi indeks global

void quicksorting(int l, int r, ojek array[]);	//deklarasi semua sorting
void bubblesorting(int x,  ojek array[]);
void insertionsorting(int x, ojek array[]);
void selectionsorting(int x, ojek array[]);
void urutkan(int x, int y, ojek array1[], ojek array2[], ojek hasil[]);	//deklarasi merging