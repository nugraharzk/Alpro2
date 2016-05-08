/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [JADKOS15], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//header.h
//merupakan daftar isi dari program

#include <stdio.h>
#include <string.h>

typedef struct{
	int hari;	//bungkusan hari
}kuliah;

int matriks[5][11];	//matriks irisannya

int i,j;	//indeks global

void irisan(int x, kuliah cari[], int mulai, int selesai);	//prosedur mencari irisan
void cari();	//prosedur menampilkan irisannya

/*
		Testcase 1
5
1 7 18
2 7 10
2 16 18
3 7 12
4 9 12

3
2 7 18
3 10 16
4 7 16

4
1 8 12
1 16 17
3 8 12
4 7 10

		Testcase 2
5
1 7 18
2 7 16
3 9 16
4 7 12
4 16 18

4
2 10 18
3 7 10
4 7 16
5 10 18

3
3 16 18
5 7 10
5 13 16
*/