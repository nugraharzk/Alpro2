/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [JADKOS15], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//main.c
//tubuh utama dalam program

#include "header.h"

int main(){
	int m,n,o; 	//deklarasi jumlah input moni tobi piyu
	int mulai,selesai;	//deklarasi waktu kuliah ber-3
	
	scanf("%d",&m);	//memasukkan nilai input
	kuliah tobi[m];	//deklarasi struct
	for(i = 0; i < m; i++){
		scanf("%d %d %d",&tobi[i].hari,&mulai,&selesai);	//memasukkan input
		irisan(i,tobi,mulai,selesai);	//langsung proses aja mencari irisan
	}
	
	scanf("%d",&n);
	kuliah moni[n];
	for(i = 0; i < n; i++){
		scanf("%d %d %d",&moni[i].hari,&mulai,&selesai);
		irisan(i,moni,mulai,selesai);	//mencari irisan kedua kalinya
	}
	
	scanf("%d",&o);
	kuliah piyu[o];
	for(i = 0; i < o; i++){
		scanf("%d %d %d",&piyu[i].hari,&mulai,&selesai);
		irisan(i,piyu,mulai,selesai);	//sampai ketiga kalinya
	}

	cari();	//memanggil prosedur cari :D

	// for(i = 0; i < 5; i++){
	// 	for(j = 0; j < 11; j++){
	// 		printf("%d", matriks[i][j]);
	// 	}
	// 	printf("\n");
	// }

	return 0;
}