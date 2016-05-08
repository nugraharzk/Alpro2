/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [MPPM16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int main(){
	scanf("%d",&n);	//memasukkan nilai ke n
	daftar urut[n];	//deklarasi array of struct
	
	char kondisi[64];	//string kondisi
	scanf("%s",&kondisi);	//memasukkan string ke dalam kondisi

	for(i = 0; i < n; i++){
		scanf("%s %s",&urut[i].nim,&urut[i].nama);	//lakukan input sebanyak n
	}

	char tampil[64];	//deklarasi tampil
	scanf("%s",&tampil);	//memasukkan string

	cek(kondisi,tampil,urut);	//memanggil prosedur

	return 0;
}