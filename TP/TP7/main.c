/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan 				   //
// [TP7 - Hitung hitung ip ceria], jika saya melakukan kecurangan maka Allah/Tuhan     //
// adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.				   //
/////////////////////////////////////////////////////////////////////////////////////////

//main.c
//tubuh utama dalam program

#include "header.h"

int main(){
	readfilefirst(arr1);	//panggil prosedur untuk array pertama
	readfilesecond(arr2);	//untuk array kedua
	insertionsorting(index1,arr1);	//lalu urutkan
	insertionsorting(index2,arr2);	//urutkan juga
	urutkan(index1,index2,arr1,arr2,arr3);	//urutkan dan merging kedua array
	flushtofile(arr3);	//memasukkan array ke dalam file

	return 0;
}