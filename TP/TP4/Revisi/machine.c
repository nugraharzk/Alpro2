/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [MPPM16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

#include "header.h"

int cari(char string[]){
	int count=0;
	if(strlen(string) == 7){	//mengecek panjang string nim, jika 7 maka TRUE
		i = 0;	//deklarasi indeks untuk while
		count = 1;	//jika nim berjumlah 7 angka dan semuanya angka, maka tidak error
		while((i < 7) && (count == 1)){
			if((string[i] != '0') && (string[i] != '1') && (string[i] != '2') && 
				(string[i] != '3') && (string[i] != '4') && (string[i] != '5') && 
				(string[i] != '6') && (string[i] != '7') && (string[i] != '8') && 
				(string[i] != '9')){	//kondisi jika ada karakter, maka dierrorkan
				count = 0;
			}
			i++;	//iterasi
		}
	}else{
		count = 0;	//jika panjang string nim tidak sebanyak 7, maka FALSE
	}

	return count;
}

// void sortnim(char kondisi[64], int count, daftar urut[n]){
// 	int tukar;		//deklarasi variabel lokal
// 	char temp1[64];
// 	char temp2[64];

// 	printf("---Hasil Pengurutan---\n");
// 	if(count == 0){	//jika nimnya tidak ada yang benar, maka tampilkan
// 		printf("Tidak ada data valid.\n");
// 	}else{	//pengecualiannya
// 		do{														//bubble sorting disini
// 			tukar = 0;
// 			for(i = 0; i < (count-1); i++){
// 				if(strcmp(urut[i+1].nim,urut[i].nim)==-1){
// 					strcpy(temp1,urut[i].nim);
// 					strcpy(temp2,urut[i].nama);
// 					strcpy(urut[i].nim, urut[i+1].nim);
// 					strcpy(urut[i].nama, urut[i+1].nama);
// 					strcpy(urut[i+1].nim, temp1);
// 					strcpy(urut[i+1].nama, temp2);
// 					tukar = 1;
// 				}
// 			}
// 		}while(tukar == 1);
// 		for(i = 0; i < count; i++){
// 			printf("%s %s\n", urut[i].nim, urut[i].nama);	//menampilkan nim dan nama
// 		}
// 	}
// 	// printf("%d\n", count);
// 	if(strcmp("ya",kondisi)==0 && count != n){		//jika diminta menampilkan daftar error
// 		printf("---Daftar Error---\n");
// 		for(i = 0; i < (n-count); i++){
// 			printf("%s - %s tidak valid.\n", urut[i].errornim, urut[i].errornama);
// 		}
// 	}
// }

// void sortnama(char kondisi[64], int count, daftar urut[n]){
// 	printf("---Hasil Pengurutan---\n");
// 	if(count == 0){	//jika tidak ada nim yang benar, maka masuk kondisi ini
// 		printf("Tidak ada data valid.\n");
// 	}else{	//jika tidak, masuk kondisi ini
// 		getnama(0,count-1,urut);	//memanggil prosedur quick sorting
// 		for(i = 0; i < count; i++){
// 			printf("%s %s\n", urut[i].nim, urut[i].nama);	//print nim dan nama
// 		}
// 	}
// 	// printf("%d\n", count);
// 	if(strcmp("ya",kondisi)==0 && count != n){	//jika diminta menampilkan daftar error
// 		printf("---Daftar Error---\n");
// 		for(i = 0; i < (n-count); i++){
// 			printf("%s - %s tidak valid.\n", urut[i].errornim, urut[i].errornama);
// 		}
// 	}
// }

// void getnama(int l, int r, daftar urut[n]){
// 	char temp_nim[64];	//deklarasi variabel lokal
// 	char temp_nama[64];
// 	i = l;																//quick sorting
// 	j = r;
// 	do{	
// 		while((strcmp(urut[i].nama,urut[r].nama)==-1) && (i <= j)){
// 			i = i + 1;
// 		}
// 		while((strcmp(urut[j].nama,urut[l].nama)==1) && (i <= j)){
// 			j = j - 1;
// 		}
// 		if(i < j){
// 			strcpy(temp_nama, urut[i].nama);
// 			strcpy(temp_nim, urut[i].nim);
// 			strcpy(urut[i].nama, urut[j].nama);
// 			strcpy(urut[i].nim, urut[j].nim);
// 			strcpy(urut[j].nama, temp_nama);
// 			strcpy(urut[j].nim, temp_nim);
// 			i = i + 1;
// 			j = j - 1;
// 		}
// 	}while(i < j);

// 	if(l < j){
// 		getnama(l,j,urut);
// 	}
// 	if(i < r){
// 		getnama(i,r,urut);
// 	}
// }