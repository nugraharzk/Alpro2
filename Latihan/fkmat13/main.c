#include "header.h"

int main(){
	int i,j,x;
	char k,b;
	int n,m;
	int kolom[32];
	int baris[32];
	
	for(x = 0; x < 2; x++){
		scanf(" %c",&k);
		if(k == 'K'){
			scanf("%d",&n);
			for(i = 0; i < n; i++){
				scanf("%d",&kolom[i]);
			}
		}else if(k == 'B'){
			scanf("%d",&m);
			for(i = 0; i < m; i++){
				scanf("%d",&baris[i]);
			}
		}
	}

	int hasil[m][n];
	int temp1,temp2;
	for(i = 0; i < m; i++){
		temp2 = rekursif(baris[i]);
		for(j = 0; j < n; j++){
			temp1 = rekursif(kolom[j]);
			hasil[i][j] = temp1 * temp2;
		}
	}

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\n", hasil[i][j]);
		}
	}

	return 0;
}