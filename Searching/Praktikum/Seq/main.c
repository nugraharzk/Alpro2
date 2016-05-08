#include "header.h"

int main(){
	int n,a;
	char cari_nim[64];

	scanf("%d",&n);
	mahasiswa ilkom[n];

	for(a = 0; a < n; a++){
		scanf("%s %s %f", &ilkom[a].nim, &ilkom[a].nama, &ilkom[a].nilai);
	}

	scanf("%s",&cari_nim);

	searching(ilkom,n,cari_nim);

	return 0;
}