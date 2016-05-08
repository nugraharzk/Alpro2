#include <stdio.h>
#include <string.h>

int tabInt[10] = {15, 18, 23, 28, 28, 34, 67, 67, 89, 98};

int main(){
	int i,j,k;
	int bil_cari, ketemu;
	i = 0;
	j = 9;
	// bil_cari = 89;
	scanf("%d",&bil_cari);
	ketemu = 0;

	while((ketemu == 0) && (i <= j)){
		k = (int)(i+j) / 2;
		if(tabInt[k] == bil_cari){
			ketemu == 1;
			printf("%d ", tabInt[k]);
		}else{
			if(tabInt[k] > bil_cari){
				j = k - 1;
			}else{
				i = k + 1;
			}
		}
	}

	if(ketemu == 1){
		printf("Ada pada tabel\n");
	}else{
		printf("Tidak ditemukan\n");
	}

	return 0;
}