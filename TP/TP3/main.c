#include "header.h"

int main(){
	int n;
	scanf("%d",&n);
	daftar urut[n];
	
	for(i = 0; i < n; i++){
		scanf("%s %s %d",&urut[i].nama,&urut[i].kelas,&urut[i].nilai);
	}
	printf("\n");
	
	sorting(n,urut);

	// for(i = 0; i < n; i++){
	// 	printf("%s %s %d\n", urut[i].nama, urut[i].kelas, urut[i].nilai);
	// }

	return 0;
}