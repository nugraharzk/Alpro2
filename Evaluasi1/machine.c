/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [EVBI16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//machine.c
//mesin program untuk main

#include "header.h"

int hitung(char array[]){
	int count=0;	//variabel hasil
	if(array[0] == '1'){	//jika digit pertama 1
		count = count + 128;	//tambahkan 128
	}							//begitu seterusnya
	if(array[1] == '1'){	
		count = count + 64;	
	}
	if(array[2] == '1'){
		count = count + 32;
	}
	if(array[3] == '1'){
		count = count + 16;
	}
	if(array[4] == '1'){
		count = count + 8;
	}
	if(array[5] == '1'){
		count = count + 4;
	}
	if(array[6] == '1'){
		count = count + 2;
	}
	if(array[7] == '1'){
		count = count + 1;
	}
	return count;	//mengembalikan nilai
}

void insertionsorting(int x, angka array[]){
	angka temp;	//deklarasi temporary
    for (i = 1; i < x; i++){
        temp = array[i];	//memindahkan isi array ke dalam temporary
        j = i - 1;	//iterasi

        while ((temp.desimal < array[j].desimal) && (j >= 0)) {	//looping memindahkan desimal
            array[j+1] = array[j];	//array ke i diisi array ke j
            j--;
        }

        array[j+1] = temp;	//mengisi array ke-i menjadi isi dari temporary
    }
}

void urutkan(int x, int y, angka array1[], angka array2[], angka hasil[]){
    int count1 = 0;	//counter untuk indeks array
    int count2 = 0;
    int count3 = 0;

    while((count1 < x) && (count2 < y)){						//looping
        if(array1[count1].desimal < array2[count2].desimal){
            hasil[count3] = array1[count1];
            count1++;
            count3++;
        }else if(array1[count1].desimal > array2[count2].desimal){
            hasil[count3] = array2[count2];
            count2++;
            count3++;
        }else{
            hasil[count3] = array1[count1];
            count1++;
            count3++;
            hasil[count3] = array2[count2];
            count2++;
            count3++;
        }
    }

    if(count1 < x){
        for(i = count1; i < x; i++){
            hasil[count3] = array1[i];
            count3++;
        }
    }
    if(count2 < y){
        for(i = count2; i < y; i++){
            hasil[count3] = array2[i];
            count3++;
        }
    }
}

void tampil(int x, int cari, angka daftar[]){
	int ketemu=0;	//penanda sama atau tidak
	int indeks=0;	//menampung indeks ke sekian
	for(i = 0; i < x; i++){
		if(daftar[i].desimal == cari){	//jika ketemu,
			ketemu = 1;	//tandai
			indeks = i+1;	//masukkan indeksnya
		}
	}
	if(ketemu == 1){	//jika ketemu,
		for(i = 0; i < x; i++){
			printf("%s\n", daftar[i].biner);	//tampilkan binernya
		}
		printf("index %d\n", indeks);	//indeks ke-%d
	}else{
		printf("data not found\n");	//jika tidak ketemu, tampilkan not found
	}
}