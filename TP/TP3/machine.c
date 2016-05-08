#include "header.h"

void sorting(int n, daftar urut[n]){
	int data_sisip;
	char nama_sisip[64];
	char kelas_sisip[64];
	for(i = 1; i < n; i++){
		data_sisip = urut[i].nilai;
		strcpy(nama_sisip, urut[i].nama);
		strcpy(kelas_sisip, urut[i].kelas);
		j = i - 1;

		while((data_sisip > urut[j].nilai) && (j >= 0)){
			urut[j+1].nilai = urut[j].nilai;
			strcpy(urut[j+1].nama, urut[j].nama);
			strcpy(urut[j+1].kelas, urut[j].kelas);
			j = j - 1;
		}

		while((strcmp(nama_sisip,urut[j].nama)==1) && (data_sisip == urut[j].nilai) && (j >= 0)){
			strcpy(urut[j+1].nama, urut[j].nama);
			strcpy(urut[j+1].kelas, urut[j].kelas);
			j = j - 1;
		}

		urut[j+1].nilai = data_sisip;
		strcpy(urut[j+1].nama, nama_sisip);
		strcpy(urut[j+1].kelas, kelas_sisip);
	}
	panggil(n,urut);
}

void panggil(int n, daftar urut[n]){
	for(i = 0; i < n; i++){
		printf("%s %s %d\n", urut[i].nama, urut[i].kelas, urut[i].nilai);
	}
}