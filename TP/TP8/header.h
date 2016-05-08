// Nama		: Rizki Nugraha
// Kelas	: C
// Nim		: 1506748
			
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nim[15];	//variabel nim
	char nama[50];	//variabel nama
	char kelas[5];	//variabel kelas
}mahasiswa;

//variabel global
mahasiswa data[999];	//variabel bungkusan menyimpan data
int n;	//banyak data

//prosedur
int longerstr();			//menghitung panjang kata
void readfile();			//untuk membaca file
void writefile();			//untuk menulis file
int finddata(char[15]);		//fungsi untuk mencari data yang sama
void insertdata(mahasiswa);	//untuk memasukkan data
void deletedata(char[15]);	//untuk menghapus data
void updatedata(char[15]);	//untuk mengupdate data