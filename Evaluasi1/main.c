/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [EVBI16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//main.c
//tubuh utama dalam program

#include "header.h"

int main(){
	angka daftar[64];	//array bungkusan daftar

	i = 0;	//inisialisasi
	do{
		scanf("%s",daftar[i].biner);	//input biner disini
		i++;	//iterasi
	}while(strcmp(daftar[i-1].biner,"Selesai")!=0);	//syarat looping
	int n=i-1;	//memasukkan indeks i ke variabel n

	angka kecil[64];	//array bungkusan kecil
	angka besar[64];	//array bungkusan besar
	int dapat1=0;	//indeks untuk bungkusan kecil
	int dapat2=0;	//indeks untuk bungkusan besar
	for(i = 0; i < n; i++){
		daftar[i].desimal = hitung(daftar[i].biner);	//menghitung dan memasukkan biner ke desimal
		if(daftar[i].desimal <= 100){	//jika biner bernilai lebih kecil atau sama dengan 100
			kecil[dapat1] = daftar[i];	//masuk bungkusan kecil
			dapat1++;	//iterasi indeks pertama
		}else{	//jika lebih besar dari 100
			besar[dapat2] = daftar[i];	//memasukkan ke bungkusan besar
			dapat2++;	//iterasi indeks kedua
		}
	}

	int cari;	//deklarasi pencarian nilai
	scanf("%d",&cari);	//memasukkan nilainya

	// for(i = 0; i < n; i++){
	// 	printf("%s\n", daftar[i].biner);
	// }
	// printf("\n");
	// for(i = 0; i < n; i++){
	// 	printf("%d\n", daftar[i].desimal);
	// }

	insertionsorting(dapat1,kecil);	//sorting tabel pertama (kecil)
	insertionsorting(dapat2,besar);	//sorting tabel kedua	(besar)
	// for(i = 0; i < dapat1; i++){			/* TROUBLESHOOTING */
	// 	printf("%d\n", kecil[i].desimal);
	// }
	// for(i = 0; i < dapat2; i++){
	// 	printf("%d\n", besar[i].desimal);
	// }
	urutkan(dapat1,dapat2,kecil,besar,daftar); //merge-kan kedua tabel tersebut
	// for(i = 0; i < n; i++){				/* TROUBLESHOOTING */
	// 	printf("%s\n", daftar[i].biner);
	// }

	tampil(n,cari,daftar);	//tampilkan hasilnyaaa

	return 0;
}