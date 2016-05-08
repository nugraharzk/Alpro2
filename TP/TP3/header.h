/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [nama evaluasi],   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

int i,j;

typedef struct{
	char nama[64];
	char kelas[64];
	int nilai;
}daftar;

void sorting(int n, daftar urut[n]);
void panggil(int n, daftar urut[n]);