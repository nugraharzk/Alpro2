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
	daftar fix[n];
	
	char kondisi[64];	//string kondisi
	scanf("%s",&kondisi);	//memasukkan string ke dalam kondisi

	for(i = 0; i < n; i++){
		scanf("%s %s",&urut[i].nim,&urut[i].nama);	//lakukan input sebanyak n
	}

	char tampil[64];	//deklarasi tampil
	scanf("%s",&tampil);	//memasukkan string

	int temp=0;
	int indeks1=0,indeks2=0;
	for(i = 0; i < n; i++){
		temp = cari(urut[i].nim);
		printf("%d\n", temp);
		// if(temp == 1){
		// 	fix[indeks1] = urut[i];	//memanggil prosedur
		// 	indeks1++;
		// }else{
		// 	urut[indeks2] = urut[i];	//memanggil prosedur
		// 	indeks2++;
		// }
	}

	// for(i = 0; i < n; i++){
	// 	printf("%s %s\n", fix[i].nim, fix[i].nama);
	// }
	// for(i = indeks1; i < indeks2; i++){
	// 	printf("%s %s\n", urut[i].nim, urut[i].nama);
	// }

	return 0;
}