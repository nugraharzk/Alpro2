/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [MPPM16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

void cek(char kondisi[64], char tampil[64], daftar urut[n]){
	int array[n];	//deklarasi variabel lokal
	int count=0;
	for(i = 0; i < n; i++){
		if(strlen(urut[i].nim) == 7){	//mengecek panjang string nim, jika 7 maka TRUE
			array[i] = 1;
			j = 0;	//deklarasi indeks untuk while
			while((j < 7) && (array[i] == 1)){
				if((urut[i].nim[j] != '0') && (urut[i].nim[j] != '1') && (urut[i].nim[j] != '2') && 
					(urut[i].nim[j] != '3') && (urut[i].nim[j] != '4') && (urut[i].nim[j] != '5') && 
					(urut[i].nim[j] != '6') && (urut[i].nim[j] != '7') && (urut[i].nim[j] != '8') && 
					(urut[i].nim[j] != '9')){	//kondisi jika ada karakter, maka dierrorkan
					array[i] = 0;
				}
				j++;	//iterasi
			}
			if(array[i] == 1){
				count++;	//dihitung ada berapa banyak nim yang benar
			}
			// printf("%d\n", array[i]);	//disini hanya troubleshooting :D
			// printf("%d\n", count);
		}else{
			array[i] = 0;	//jika panjang string nim tidak sebanyak 7, maka FALSE
		}
	}
	// printf("%d\n", count);	//troubleshooting untuk jumlah nim yang benar :D

	int posisi_ada=0;	//deklarasi indeks nim yang error dan yang tidak
	int posisi_error=0;

	for(i = 0; i < n; i++){
		if(array[i] == 1){	//jika string nimnya benar, maka dipindahkan isi stringnya
			strcpy(urut[posisi_ada].nim, urut[i].nim);
			strcpy(urut[posisi_ada].nama, urut[i].nama);
			posisi_ada++;
		}else{	//jika string nimnya error, maka dipindahkan ke error
			strcpy(urut[posisi_error].errornim, urut[i].nim);
			strcpy(urut[posisi_error].errornama, urut[i].nama);
			posisi_error++;
		}
	}

	// for(i = 0; i < count; i++){								//troubleshooting lagi :D
	// 	printf("%s %s\n", urut[i].nim, urut[i].nama);
	// }
	// printf("\n");
	// for(i = 0; i < (n-count); i++){
	// 	printf("%s %s\n", urut[i].errornim, urut[i].errornama);
	// }

	if(strcmp("nama",tampil)==0){	
		sortnama(kondisi,count,urut);	//jika sortingnya diminta menurut nama, maka panggil prosedur nama
	}else if(strcmp("nim",tampil)==0){
		sortnim(kondisi,count,urut);	//jika sortingnya diminta menurut nim
	}else{
		printf("---Data tidak dapat diproses---\n");	//jika inputnya tidak sesuai, maka tampilkan ini
	}
}

void sortnim(char kondisi[64], int count, daftar urut[n]){
	int tukar;		//deklarasi variabel lokal
	char temp1[64];
	char temp2[64];

	printf("---Hasil Pengurutan---\n");
	if(count == 0){	//jika nimnya tidak ada yang benar, maka tampilkan
		printf("Tidak ada data valid.\n");
	}else{	//pengecualiannya
		do{														//bubble sorting disini
			tukar = 0;
			for(i = 0; i < (count-1); i++){
				if(strcmp(urut[i+1].nim,urut[i].nim)==-1){
					strcpy(temp1,urut[i].nim);
					strcpy(temp2,urut[i].nama);
					strcpy(urut[i].nim, urut[i+1].nim);
					strcpy(urut[i].nama, urut[i+1].nama);
					strcpy(urut[i+1].nim, temp1);
					strcpy(urut[i+1].nama, temp2);
					tukar = 1;
				}
			}
		}while(tukar == 1);
		for(i = 0; i < count; i++){
			printf("%s %s\n", urut[i].nim, urut[i].nama);	//menampilkan nim dan nama
		}
	}
	// printf("%d\n", count);
	if(strcmp("ya",kondisi)==0 && count != n){		//jika diminta menampilkan daftar error
		printf("---Daftar Error---\n");
		for(i = 0; i < (n-count); i++){
			printf("%s - %s tidak valid.\n", urut[i].errornim, urut[i].errornama);
		}
	}
}

void sortnama(char kondisi[64], int count, daftar urut[n]){
	printf("---Hasil Pengurutan---\n");
	if(count == 0){	//jika tidak ada nim yang benar, maka masuk kondisi ini
		printf("Tidak ada data valid.\n");
	}else{	//jika tidak, masuk kondisi ini
		getnama(0,count-1,urut);	//memanggil prosedur quick sorting
		for(i = 0; i < count; i++){
			printf("%s %s\n", urut[i].nim, urut[i].nama);	//print nim dan nama
		}
	}
	// printf("%d\n", count);
	if(strcmp("ya",kondisi)==0 && count != n){	//jika diminta menampilkan daftar error
		printf("---Daftar Error---\n");
		for(i = 0; i < (n-count); i++){
			printf("%s - %s tidak valid.\n", urut[i].errornim, urut[i].errornama);
		}
	}
}

void getnama(int l, int r, daftar urut[n]){
	char temp_nim[64];	//deklarasi variabel lokal
	char temp_nama[64];
	i = l;																//quick sorting
	j = r;
	do{	
		while((strcmp(urut[i].nama,urut[r].nama)==-1) && (i <= j)){
			i = i + 1;
		}
		while((strcmp(urut[j].nama,urut[l].nama)==1) && (i <= j)){
			j = j - 1;
		}
		if(i < j){
			strcpy(temp_nama, urut[i].nama);
			strcpy(temp_nim, urut[i].nim);
			strcpy(urut[i].nama, urut[j].nama);
			strcpy(urut[i].nim, urut[j].nim);
			strcpy(urut[j].nama, temp_nama);
			strcpy(urut[j].nim, temp_nim);
			i = i + 1;
			j = j - 1;
		}
	}while(i < j);

	if(l < j){
		getnama(l,j,urut);
	}
	if(i < r){
		getnama(i,r,urut);
	}
}