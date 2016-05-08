#include <stdio.h>
#include <string.h>

typedef struct{
	char nim[64];
	char nama[64];
	float nilai;
}mahasiswa;

void searching(mahasiswa ilkom[], int n, char cari_nim[]);