#include "header.h"

int main(){
	char pilih[64];
	scanf("%s",&pilih);

	int m,n,o;

	scanf("%d",&m);
	uts array1[m];
	for(i = 0; i < m; i++){
		scanf("%s",&array1[i].string);
		array1[i].angka = cekVokal(array1[i].string);
	}

	scanf("%d",&n);
	uts array2[n];
	for(i = 0; i < n; i++){
		scanf("%s",&array2[i].string);
		array2[i].angka = cekVokal(array2[i].string);
	}
	
	scanf("%d",&o);
	uts array3[o];
	for(i = 0; i < o; i++){
		scanf("%s",&array3[i].string);
		array3[i].angka = cekVokal(array3[i].string);
	}
	printf("\n");

	if(strcmp(pilih, "quicksort")==0){
		// quicksorting(array1);
		// quicksorting(array2);
		// quicksorting(array3);
	}else if(strcmp(pilih, "bubblesort")==0){
		// bubblesorting(array1);
		// bubblesorting(array2);
		// bubblesorting(array3);
	}else if(strcmp(pilih, "insertionsort")==0){
		insertionsorting(m,array1);
		insertionsorting(n,array2);
		insertionsorting(o,array3);
	}else if(strcmp(pilih, "selectionsort")==0){
		// selectionsorting(array1);
		// selectionsorting(array2);
		// selectionsorting(array3);
	}

	uts result1[m+n];
	uts result2[m+n+o];
	gabung(array1,array2,result1,m,n);
	gabung(result1,array3,result2,m+n,o);

	// for(i = 0; i < m; i++){
	// 	printf("%d\n", array1[i].angka);
	// }

	for(i = 0; i < m+n+o; i++){
		printf("%s\n", result2[i].string);
	}

	// printf("%s\n", pilih);
	// for(i = 0; i < m; i++){
	// 	printf("%s\n",array1[i].string);
	// }
	// // printf("\n");
	// for(i = 0; i < n; i++){
	// 	printf("%s\n",array2[i].string);
	// }
	// // printf("\n");
	// for(i = 0; i < o; i++){
	// 	printf("%s\n",array3[i].string);
	// }
}