/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [MPPM16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

typedef struct{			//deklarasi struct disini
	char nim[64];		//string untuk nim
	char nama[64];		//string untuk nama
	char errornim[64];	//string untuk nim yang error
	char errornama[64];	//string untuk nama yang error
}daftar;

int i,j;	//deklarasi variabel global
int n;

void cek(char kondisi[64], char tampil[64], daftar urut[n]);
void sortnim(char kondisi[64], int count, daftar urut[n]);
void sortnama(char kondisi[64], int count, daftar urut[n]);
void getnama(int l, int r, daftar urut[n]);