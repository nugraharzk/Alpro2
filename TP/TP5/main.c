/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [TMPBD16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//main.c
//tubuh utama dalam program

#include "header.h"

int main(){
	int n,m,o;
	scanf("%d",&n);
	data big1[n];	//array bungkusan bigdata
	for(i = 0; i < n; i++){
		scanf("%s",&big1[i].biner);
		big1[i].desimal = hitung(big1[i].biner);
	}

	scanf("%d",&m);
	data big2[m];
	for(i = 0; i < m; i++){
		scanf("%s",&big2[i].biner);
		big2[i].desimal = hitung(big2[i].biner);
	}

	scanf("%d",&o);
	data big3[o];
	for(i = 0; i < o; i++){
		scanf("%s",&big3[i].biner);
		big3[i].desimal = hitung(big3[i].biner);
	}

	insertionsorting(n,big1);	//sorting bigdata pertama
	insertionsorting(m,big2);	//sorting bigdata pertama
	insertionsorting(o,big3);	//sorting bigdata pertama

	data hasil[m+n];
	data fix[n+m+o];
	urutkan(n,m,big1,big2,hasil); //merge-kan kedua tabel tersebut
	urutkan(n+m,o,hasil,big3,fix); //merge-kan kedua tabel tersebut

	tampil(n+m+o,fix);	//tampilkan hasil merge
	getSuspicious(n,m,o,big1,big2,big3);	//menampilkan suspicious data

	return 0;
}