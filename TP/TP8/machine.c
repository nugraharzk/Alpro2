#include "header.h"

// proses pencarian nama terpanjang
int longerstr(){
	int i;	//deklarasi indeks
  	int thelongest=strlen(data[0].nama);		//memasukkan panjang kata
  	for (i = 1; i < n; i+=1){
    	if (thelongest<strlen(data[i].nama)){	//pemisalan
      		thelongest=strlen(data[i].nama);	//mengubah nama terpanjang
    	}
  	}
  	return thelongest;	//melempar hasil kata terpanjang
}

//proses membaca file
void readfile(){
	n=0;			//deklarasi n sama dengan nol
	mahasiswa tmp;	//bungkusan penampung
	FILE *fdata;	//deklarasi nama file
	//membaca file
	fdata = fopen("data/mahasiswa.dat","r");

	//proses membaca file dan ditampung di bungkusan
	do{
		fscanf(fdata, "%s %s %s",&tmp.nim,&tmp.nama,&tmp.kelas);
		if(strcmp(tmp.nim,"##")!=0 && strcmp(tmp.nama,"##")!=0 && strcmp(tmp.kelas,"##")!=0){
			data[n]=tmp;
			n++;
		}
	}while(strcmp(tmp.nim,"##")!=0 && strcmp(tmp.nama,"##")!=0 && strcmp(tmp.kelas,"##")!=0);
	//menutup file
	fclose(fdata);
}

//proses menulis file
void writefile(){
	int i;	//variabel iterasi

	FILE *fdata;	//deklarasi fdata
	//menulis di file
	fdata = fopen("data/mahasiswa.dat","w");
	//proses penulisan di file
	for(i = 0; i < n; i++){
		fprintf(fdata, "%s %s %s\n", data[i].nim, data[i].nama, data[i].kelas);
	}
	//penambahan dummy
	fprintf(fdata, "## ## ##\n");
	//menutup file
	fclose(fdata);
}

//proses mencari data
int finddata(char nim[15]){
	int status = 0;	//inisialisasi status
	int i=0;	//var iterasi

	//memanggil prosedur baca
	readfile();

	//proses mencari
	while(status == 0 && i < n){
		if(strcmp(data[i].nim,nim)==0){
			//jika nilai yang dicari ada
			status = 1;
		}else{
			i++;
		}
	}
	//melempar nilai status
	return status;
}

//proses memasukkan data
void insertdata(mahasiswa masukan){
	int i=0;	//inisialisasi iterasi
	int status = finddata(masukan.nim);	//menerima lemparan dari proses mencari
	//jika nim tidak ganda
	if(status == 0){
		//data baru dimasukkan
		data[n]=masukan;
		n++;
		//data ditulis kedalam file
		writefile();
		printf("data berhasil ditambahkan\n");
	}else{
		//jika nim ganda, tidak bisa memasukkan data baru
		printf("NIM sudah terdaftar, data gagal ditambahkan\n");
	}
}

//proses menghapus data
void deletedata(char nim[15]){
	//pemanggilan prosedur baca
	readfile();
	int i,j;	//variabel iterasi
	int status = 0; //inisialisasi status
	i = 0;
	char hapus[10];	//variabel hapus

	//proses menghapus data
	while(i < n && status == 0){
		//jika nim yang akan dihapus ada,
		if(strcmp(data[i].nim,nim)==0){
			status = 1;	//status menjadi satu
			//mencegah salah hapus data
			printf("Data ditemukan. Yakin menghapus data?\n");
			printf("ya / tidak\n");
			//input hapus(ya) atau tidak
			scanf("%s",&hapus);
			//jika pilihan ya, maka data dihapus
			if(strcmp(hapus,"ya")==0){
				for(i = 0; i < n; j++){
					data[j]=data[j+1];
				}
				n--;
				//data ditulis kedalam file
				writefile();
			}
		}else{
			//jika tidak, data tidak akan dihapus
			i++;
		}
	}

	//jika nim tidak ada dalam data
	if(status == 0){
		printf("Data tidak ditemukan\n");
	}
}

//proses memperbarui data
void updatedata(char nim[15]){
	//pemanggilan prosedur baca
	readfile();
	int i,j;	//var iterasi
	int status = 0;	//var status
	i = 0;
	char nama[25], kelas[15];	//variabel menampung nama dan kelas
	//proses update
	while(i < n && status == 0){
		//jika nim yang akan diupdate ada di dalam data
		if(strcmp(data[i].nim,nim)==0){
			status = 1;
			printf("Data ditemukan\n");
			//tampilan awal sebelum diupdate
			printf("--Data Awal--\n");	
			printf("Nama: %s\n", data[i].nama);
			printf("Kelas: %s\n", data[i].kelas);
			printf("-----------\n");
			//input data baru agar data terupdate
			printf("Masukkan nama baru: \n");
			scanf("%s",&nama);
			printf("Masukkan kelas baru: \n");
			scanf("%s",&kelas);
			//proses menempatkan ke dalam bungkusan
			strcpy(data[i].nama,nama);
			strcpy(data[i].kelas,kelas);
			printf("Data berhasil diupdate\n");
			//data ditulis kembali ke dalam file
      		writefile();
   		}else{
    		i += 1;
    	}
  	}
  // jika nim tidak ada di dalam data
	  if (status == 0) {
	    printf("Data tidak ditemukan\n");
	  }
}