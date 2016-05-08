#include <stdio.h>
#include <string.h>

typedef struct{
	int angka;
	char string[64];
}uts;

int i,j;

int cekVokal(char string[]);
// void selectionsorting();
void insertionsorting(int x, uts array[]);
// void bubblesorting();
// void quicksorting();
void gabung(uts array1[], uts array2[], uts result1[], int n, int m);