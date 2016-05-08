/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [ojeku16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//main.c
//merupakan tubuh utama dari program

#include "header.h"

int main(){
	char kondisi[64];	//deklarasi kondisi
	scanf("%s",&kondisi);	//memasukkan sorting apa yang akan digunakan

	int n,m,p;	//deklarasi jumlah panjang array 1, 2, 3

	scanf("%d",&n);	//memasukkan jumlah panjang array pertama
	ojek driver2014[n];	//deklarasi array pertama
	for(i = 0; i < n; i++){
		//inputnya disini
		scanf("%s %s %d %lf",&driver2014[i].nama_driver, &driver2014[i].no_telp, &driver2014[i].jam_terbang, &driver2014[i].komisi);
	}

	scanf("%d",&m);	//memasukkan jumlah panjang array kedua
	ojek driver2015[m];	//deklarasi array kedua
	for(i = 0; i < m; i++){
		//input
		scanf("%s %s %d %lf",&driver2015[i].nama_driver, &driver2015[i].no_telp, &driver2015[i].jam_terbang, &driver2015[i].komisi);
	}

	scanf("%d",&p);	//memasukkan jumlah panjang
	ojek driver2016[p];
	for(i = 0; i < p; i++){
		//input lagi
		scanf("%s %s %d %lf",&driver2016[i].nama_driver, &driver2016[i].no_telp, &driver2016[i].jam_terbang, &driver2016[i].komisi);
	}

	if(strcmp(kondisi, "quick")==0){		//pemilihan sorting disini
		quicksorting(0,n-1,driver2014);		//masuk ke prosedurnya
		quicksorting(0,m-1,driver2015);
		quicksorting(0,p-1,driver2016);
	}else if(strcmp(kondisi, "bubble")==0){
		bubblesorting(n,driver2014);
		bubblesorting(m,driver2015);
		bubblesorting(p,driver2016);
	}else if(strcmp(kondisi, "insert")==0){
		insertionsorting(n,driver2014);
		insertionsorting(m,driver2015);
		insertionsorting(p,driver2016);
	}else if(strcmp(kondisi, "select")==0){
		selectionsorting(n,driver2014);
		selectionsorting(m,driver2015);
		selectionsorting(p,driver2016);
	}

	//troubleshooting untuk array driver :D

	// for(i = 0; i < n; i++){
	// 	printf("%s %s %d %.0f\n", driver2014[i].nama_driver, driver2014[i].no_telp, driver2014[i].jam_terbang, driver2014[i].komisi);
	// }
	// printf("\n");
	// for(i = 0; i < m; i++){
	// 	printf("%s %s %d %.0f\n", driver2015[i].nama_driver, driver2015[i].no_telp, driver2015[i].jam_terbang, driver2015[i].komisi);
	// }
	// printf("\n");
	// for(i = 0; i < p; i++){
	// 	printf("%s %s %d %.0f\n", driver2016[i].nama_driver, driver2016[i].no_telp, driver2016[i].jam_terbang, driver2016[i].komisi);
	// }

	ojek hasil1[m+n];	//deklarasi array hasil urut pertama
	ojek fix[m+n+p];	//deklarasi array hasil urut kedua
	urutkan(n,m,driver2014,driver2015,hasil1);	//panggil prosedur mengurutkan pertama
	
	//troubleshooting untuk urut pertama :D

	// for(i = 0; i < m+n; i++){
	// 	printf("%s %s %d %lf\n", hasil1[i].nama_driver, hasil1[i].no_telp, hasil1[i].jam_terbang, hasil1[i].komisi);
	// }

	urutkan(m+n,p,hasil1,driver2016,fix);	//dan kedua kalinya

	//print hasilnya disini
	for(i = 0; i < m+n+p; i++){
		printf("%s %s %d %.0f\n", fix[i].nama_driver, fix[i].no_telp, fix[i].jam_terbang, fix[i].komisi);
	}

	return 0;
}