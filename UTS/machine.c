/////////////////////////////////////////////////////////////////////////////////////////
// Saya [Rizki Nugraha] tidak melakukan kecurangan seperti yang telah dispesifikasikan //
// pada mata kuliah [Algoritma dan Pemrograman 2] dalam mengerjakan [ojeku16], 		   //
// jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 		  		   //
// dan saya bersedia menerima hukumanNya. Aamiin.							  		   //
/////////////////////////////////////////////////////////////////////////////////////////

//machine.c
//isi dari mesin disini

#include "header.h"

void quicksorting(int l, int r, ojek array[]){
	ojek temp;	//deklarasi temporary
    i = l; 	//memindahkan isi dari parameter ke indeks
    j = r;

    do{
        while((array[i].komisi > array[r].komisi) && (i<=j)){
            //mencegah i berjalan terlalu jauh melewati batas j
            i++;
        }
        while((array[j].komisi < array[l].komisi) && (i<=j)){
            //mencegah i berjalan terlalu jauh melewati batas i
            j--;
        }
        if(i < j){
            temp = array[i];		//temp diisi dari array
            array[i] = array[j];	//memindahkan isi array i ke j
            array[j] = temp;	//mengisi array j ke temp
            i++;	//iterasi
            j--;
        }
    }while(i < j);

    if(l < j){
        quicksorting(l,j,array);	//rekursif
    }

    if(i < r){
        quicksorting(i,r,array);	//rekursif
    }
}

void bubblesorting(int x,  ojek array[]){
	ojek temp;	//deklarasi temporary
    int tukar;
    do{
        tukar = 0;	//mengubah nilai tukar menjadi 0
        for(i = 0; i < (x-1); i++){
            if(array[i].komisi < array[i+1].komisi){	//selama komisinya lebih kecil, disorting
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                tukar = 1;
            }

        }
    }while(tukar == 1);	//kondisi untuk looping
}

void insertionsorting(int x, ojek array[]){
	ojek temp;	//deklarasi temporary
    for (i = 1; i < x; i++) {
        temp = array[i];	//memindahkan isi array ke dalam temporary
        j = i - 1;	//iterasi

        while ((temp.komisi > array[j].komisi) && (j >= 0)) {	//looping memindahkan komisi
            array[j+1] = array[j];	//array ke i diisi array ke j
            j--;
        }

        array[j+1] = temp;	//mengisi array ke-i menjadi isi dari temporary
    }
}

void selectionsorting(int x, ojek array[]){
	ojek temp;	//deklarasi temporary
    int minIndeks;	//deklarasi indeks minimum
    for (i = 0; i < x-1; i++) {
        minIndeks = i; 	//mengisi indeks minimun dengan i
        for (j = (i+1); j < x; j++) {
            if(array[minIndeks].komisi < array[j].komisi){	//pemilihan untuk komisi
                minIndeks = j; 	//mengisi minindeks menjadi j
            }
        }
        temp = array[i];	//mengisi temp menjadi array ke-i
        array[i] = array[minIndeks];	//memindahkan array dari minindeks ke array i
        array[minIndeks] = temp;	//mengisi array minindeks menjadi temporary
    }
}

void urutkan(int x, int y, ojek array1[], ojek array2[], ojek hasil[]){
    int count1 = 0;	//counter untuk indeks array
    int count2 = 0;
    int count3 = 0;

    while((count1 < x) && (count2 < y)){						//looping
        if(array1[count1].komisi > array2[count2].komisi){
            hasil[count3] = array1[count1];
            count1++;
            count3++;
        }else if(array1[count1].komisi < array2[count2].komisi){
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