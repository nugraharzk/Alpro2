#include "header.h"

void searching(mahasiswa ilkom[], int n, char cari_nim[]){
	int ketemu=0;
	int a=0;

	while((a < n) && (ketemu == 0)){
		if(strcmp(ilkom[a].nim, cari_nim)==0){
			ketemu = 1;
		}else{
			a++;
		}
	}

	if(ketemu == 1){
		printf("---------Data Ditemukan---------\n");
		printf("%s\n", ilkom[a].nama);
		printf("%s\n", ilkom[a].nim);
		printf("%.2f\n", ilkom[a].nilai);
	}else{
		printf("Data Not Found\n");
	}
}