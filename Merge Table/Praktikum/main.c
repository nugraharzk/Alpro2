#include <stdio.h>

void uruttable(int tabel[], int n){
	int tampung,tukar,i;
	do{
		tukar = 0;
		for(i = 0; i < n-1; i++){
			if(tabel[i] > tabel[i+1]){
				tampung = tabel[i];
				tabel[i] = tabel[i+1];
				tabel[i+1] = tampung;
				tukar = 1;
			}
		}
	}while(tukar == 1);
}

void merge(int first[], int second[], int result[], int n, int m){
	uruttable(first,n);
	uruttable(second,m);
	int index1 = 0, index2 = 0, index3 = 0;

	while((index1 < n) && (index2 < m)){
		if(first[index1] < second[index2]){
			result[index3] = first[index1];
			index1++;
			index3++;
		}else if(first[index1] > second[index2]){
			result[index3] = second[index2];
			index2++;
			index3++;
		}else{
			result[index3] = first[index1];
			index1++;
			index3++;
			result[index3] = second[index2];
			index2++;
			index3++;
		}
	}
	int i = 0;
	for(i = index1; i < n; i++){
		result[index3] = first[i];
		index3++;
	}
	for(i = index2; i < m; i++){
		result[index3] = second[i];
		index3++;
	}
}

int main(){
	int n,m;
	int i;
	printf("Masukkan banyak data pertama: \n");
	scanf("%d",&n);
	int angka1[n];
	printf("Masukkan data: \n");
	for(i = 0; i < n; i++){
		scanf("%d",&angka1[i]);
	}
	
	printf("Masukkan banyak data kedua: \n");
	scanf("%d",&m);
	int angka2[m];
	printf("Masukkan data: \n");
	for(i = 0; i < m; i++){
		scanf("%d",&angka2[i]);
	}

	int angkaurut[n+m];
	merge(angka1,angka2,angkaurut,n,m);
	printf("Data terurut: \n");

	for(i = 0; i < n+m; i++){
		printf("%d\n", angkaurut[i]);
	}

	return 0;
}