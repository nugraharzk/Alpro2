#include "header.h"

int main(){
	int n,i;
	scanf("%d",&n);
	int array[n];

	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}

	urut(n,array);

	int cariangka;
	scanf("%d",&cariangka);

	cari(n,arra,cariangka);

	return 0;
}