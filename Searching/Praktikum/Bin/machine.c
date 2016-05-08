#include "header.h"

void urut(int n, int array[]){
	int sisipan;
	int i,j;
	for(i = 0; i < n; i++){
		sisipan = array[i];
		j = i - 1;

		while((sisipan > array[j]) && (j >= 0)){
			array[j+1] = array[j];
			j = j - 1;
		}
		array[j+1] = sisipan;
	}
}

void cari(int n, int array[], int cariangka){
	int i,j,k,ketemu;

	i = 0;
	j = n - 1;
	ketemu = 0;
	int m,l;
	int array2[n];

	while((ketemu == 0) && (i <= j)){
		k = (i + j) / 2;
		if(array[k] == cariangka){
			ketemu = 1;
		}else if(array[k] < cariangka){
			i = k + 1;
		}else{
			j = k - 1;
		}
	}

	if(ketemu == 1){
		printf("Ada pada tabel.\n");
	}else{
		printf("Tidak ada pada tabel.\n");
	}
}