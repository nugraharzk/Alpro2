#include <stdio.h>
#include <string.h>

typedef struct{
	char nim[50];
	char nama[50];
	float nilai;
}nilaiMatkul;
nilaiMatkul tabel[5];

void isi(int i, char nim[], char nama[], float nilai){
	strcpy(tabel[i].nim, nim);
	strcpy(tabel[i].nama, nama);
	tabel[i].nilai = nilai;
}

int cari(char tabel[]){
	if(tabel[0] == 'a' || tabel[0] == 'A'){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	char nim_cari[n];
	int ketemu,i;
	// isi(0, "13507701", "Nana", 64.75);
	// isi(1, "13507702", "Rudi", 75.11);
	// isi(2, "13507703", "Dea", 84.63);
	// isi(3, "13507704", "Ihsan", 77.07);
	// isi(4, "13507705", "Tiara", 66.70);
	// strcpy(nim_cari, "13507702");

	for(i = 0; i < n; i++){
		printf("Masukkan nim: \n");
		scanf("%s",&tabel[i].nim);
		printf("Masukkan nama: \n");
		scanf("%s",&tabel[i].nama);
		printf("Masukkan nilai: \n");
		scanf("%f",&tabel[i].nilai);
	}

	ketemu = 0;
	for(i = 0; i < n; i++){
		ketemu = ketemu + cari(tabel[i].nama);
	}

	i = 0;
	while((i < 5) && (ketemu == 0)){
		if(strcmp(tabel[i].nim, nim_cari) == 0){
			//jika data ketemu
			ketemu = 1;
		}else{
			i++;
		}
	}
	// if(ketemu == 1){
	// 	printf("nim: %s\n",tabel[i].nim);
	// 	printf("nama: %s\n",tabel[i].nama);
	// 	printf("nilai: %0.2f\n",tabel[i].nilai);
	// }else{
	// 	printf("Tidak ditemukan\n");
	// }

	if(ketemu >= 2){
		printf("Ada 2 nama atau lebih yang memiliki awalan huruf A\n");
	}else if(ketemu == 1){
		printf("Hanya ada 1 nama berawalan huruf A\n");
	}else{
		printf("Tidak ada nama berawalan huruf A\n");
	}

	return 0;
}