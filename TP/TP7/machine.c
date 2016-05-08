/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan 				   //
// [TP7 - Hitung hitung ip ceria], jika saya melakukan kecurangan maka Allah/Tuhan     //
// adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.				   //
/////////////////////////////////////////////////////////////////////////////////////////

//machine.c
//mesin program untuk main

#include "header.h"

void readfilefirst(sino array[64]){
	index1=0;	//inisialisasi
	sino tmp[64];	//bungkusan penampung
	FILE *fdata;	//deklarasi nama file

	//membaca file
	fdata = fopen("firstlist.txt","r");	

	//proses membaca file dan ditampung di bungkusan
	fscanf(fdata, "%s %s %f %d", &tmp[index1].nim, &tmp[index1].nama, &tmp[index1].nilai, &tmp[index1].sks);

	while(strcmp(tmp[index1].nim,"##")!=0){
		strcpy(array[index1].nim,tmp[index1].nim);		//memindahkan isi nim dari file ke array
		strcpy(array[index1].nama,tmp[index1].nama);	//memindahkan isi nama dari file ke array
		array[index1].ip = tmp[index1].nilai / tmp[index1].sks;		//mendapatkan ip-nya
		index1++;	//iterasi
		//scanf untuk syarat masuk while
		fscanf(fdata, "%s %s %f %d", &tmp[index1].nim, &tmp[index1].nama, &tmp[index1].nilai, &tmp[index1].sks);	
	}
	//menutup file
	fclose(fdata);
}

void readfilesecond(sino array[64]){
	index2=0;	//inisialisasi
	sino tmp[64];	//bungkusan penampung
	FILE *fdata;	//deklarasi nama file
	//membaca file
	fdata = fopen("secondlist.txt","r");

	//proses membaca file dan ditampung di bungkusan
	fscanf(fdata, "%s %s %f %d", &tmp[index2].nim, &tmp[index2].nama, &tmp[index2].nilai, &tmp[index2].sks);

	while(strcmp(tmp[index2].nim,"##")!=0){
		strcpy(array[index2].nim,tmp[index2].nim);		//memindahkan isi nim dari file ke array
		strcpy(array[index2].nama,tmp[index2].nama);	//memindahkan isi nama dari file ke array
		array[index2].ip = tmp[index2].nilai / tmp[index2].sks;		//mendapatkan ip-nya
		index2++;	//iterasi
		//scanf untuk syarat masuk while
		fscanf(fdata, "%s %s %f %d", &tmp[index2].nim, &tmp[index2].nama, &tmp[index2].nilai, &tmp[index2].sks);
	}
	//menutup file
	fclose(fdata);
}

void insertionsorting(int x, sino array[]){
	sino temp;	//deklarasi temporary
    for (i = 1; i < x; i++){
        temp = array[i];	//memindahkan isi array ke dalam temporary
        j = i - 1;	//iterasi

        while((temp.ip > array[j].ip) && (j >= 0)) {	//looping memindahkan posisi array
            array[j+1] = array[j];	//array ke i diisi array ke j
            j--;
        }

        array[j+1] = temp;	//mengisi array ke-i menjadi isi dari temporary
    }
}

void urutkan(int x, int y, sino array1[], sino array2[], sino hasil[]){
    int count1 = 0;	//counter untuk indeks array
    int count2 = 0;
    int count3 = 0;

    while((count1 < x) && (count2 < y)){						//looping
        if(array1[count1].ip > array2[count2].ip){
            hasil[count3] = array1[count1];
            count1++;
            count3++;
        }else if(array1[count1].ip < array2[count2].ip){
            hasil[count3] = array2[count2];
            count2++;
            count3++;
        }else if(array1[count1].ip == array2[count2].ip){		//jika ip keduanya sama,
        	if(strcmp(array1[count1].nim,array2[count2].nim)==1){	//urutkan berdasarkan nim dan descending
	            hasil[count3] = array1[count1];
	            count1++;
	            count3++;
        	}else{
	            hasil[count3] = array2[count2];
	            count2++;
	            count3++;
        	}
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

void flushtofile(sino array[64]){
	sino tmp[64];	//bungkusan penampung
	FILE *fdata;	//deklarasi nama file
	//membaca file
	fdata = fopen("resultlist.txt","w");

	//proses flushing to file dari array
	for(i = 0; i < index1+index2; i++){
		fprintf(fdata, "%s %s %.2f\n", array[i].nim, array[i].nama, array[i].ip);
	}
	//menambahkan dummy ke file
	fprintf(fdata, "## ## ## ##\n");

	//menutup file
	fclose(fdata);
}