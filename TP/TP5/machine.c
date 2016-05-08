/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [TMPBD16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//machine.c
//mesin program untuk main

#include "header.h"

int hitung(char array[]){
	int count=0;	//variabel hasil
	if(array[0] == '1'){	//jika digit pertama 1
		count = count + 512;	//tambahkan 512
	}							//begitu seterusnya
	if(array[1] == '1'){	
		count = count + 256;	
	}
	if(array[2] == '1'){
		count = count + 128;
	}
	if(array[3] == '1'){
		count = count + 64;
	}
	if(array[4] == '1'){
		count = count + 32;
	}
	if(array[5] == '1'){
		count = count + 16;
	}
	if(array[6] == '1'){
		count = count + 8;
	}
	if(array[7] == '1'){
		count = count + 4;
	}
	if(array[8] == '1'){
		count = count + 2;
	}
	if(array[9] == '1'){
		count = count + 1;
	}
	return count;	//mengembalikan nilai
}

void getSuspicious(int x, int y, int z, data big1[], data big2[], data big3[]){
	int stat=0;	//counter
	int arr[32];	//array
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			if(big1[i].desimal == big2[j].desimal){	//pemisalan jika desimal negara satu sama dengan negara dua
				for(k = 0; k < z; k++){
					if(big2[j].desimal == big3[k].desimal){	//pemisalan kembali
						arr[stat] = big3[k].desimal;	//memasukkan nilai desimal kedalam array
						stat++;	//iterasi counter
					}
				}
			}
		}
	}
	for(i = 0; i < stat; i++){
		printf("%d\n", arr[i]);	//menampilkan arraynya
	}
}

void insertionsorting(int x, data array[]){
	data temp;	//deklarasi temporary
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

void urutkan(int x, int y, data array1[], data array2[], data hasil[]){
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

void tampil(int x, data daftar[]){
	printf("Laporan Data Biner\n");
	printf("====================\n");
	for(i = 0; i < x; i++){
		printf("%s\n", daftar[i].biner);
	}
}