#include "header.h"

int cekVokal(char string[]){
	int count=0;
	for(j = 0; j < strlen(string); j++){
		if((string[j] != 'a') && (string[j] != 'i') 
			&& (string[j] != 'u') && (string[j] != 'e') 
			&& (string[j] != 'o')){
			count++;
		}
	}
	return count;
}

// void selectionsorting(int x, uts array[x]){
// 	int temp;
// 	int minIndeks;
// 	for(i = 0; i < x-1; i++){
// 		minIndeks = i;
// 		for(j = (i+1); j < x; j++){
// 			if(array[minIndeks] > array[j]){
// 				minIndeks = j;
// 			}
// 		}
// 		temp = array[i];
// 		array[i] = array[minIndeks];
// 		array[minIndeks] = temp;
// 	}
// }

void insertionsorting(int x, uts array[]){
	int data_sisip;
	char temp_sisip[64];
	for(i = 1; i < x; i++){
		data_sisip = array[i].angka;
		strcpy(temp_sisip, array[i].string);
		j = i - 1;

		while((data_sisip > array[j].angka) && (j >= 0)){
			array[j+1].angka = array[j].angka;
			strcpy(array[j+1].string, array[j].string);
			j = j - 1;
		}

		array[j+1].angka = data_sisip;
		strcpy(array[j+1].string, temp_sisip);
	}
}

// void bubblesorting(int x, uts array[x]){
// 	int temp;
// 	int tukar;
// 	do{
// 		tukar = 0;
// 		for(i = 0; i < x-1; i++){
// 			if(array[i] > array[i+1]){
// 				temp = array[i];
// 				array[i] = array[i+1];
// 				array[i+1] = temp;
// 				tukar = 1;
// 			}
// 		}
// 	}while(tukar == 1);
// }

void quicksorting(){
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
		quicksorting(l,j,urut);
	}
	if(i < r){
		quicksorting(i,r,urut);
	}
}

void gabung(uts array1[], uts array2[], uts result[], int n, int m){
	int index1 = 0, index2 = 0, index3 = 0;

	while((index1 < n) && (index2 < m)){
		if(array1[index1].angka > array2[index2].angka){
			result[index3] = array1[index1];
			index1++;
			index3++;
		}else if(array1[index1].angka < array2[index2].angka){
			result[index3] = array2[index2];
			index2++;
			index3++;
		}else{
			result[index3] = array1[index1];
			index1++;
			index3++;
			result[index3] = array2[index2];
			index2++;
			index3++;
		}
	}
	if(index1 < n){
        for(i = index1; i < n; i++){
            result[index3] = array1[i];
            index3++;
        }
    }
    if(index2 < m){
        for(i = index2; i < n; i++){
            result[index3] = array2[i];
            index3++;
        }
    }
}