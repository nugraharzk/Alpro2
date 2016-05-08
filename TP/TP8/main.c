#include "header.h"

int main() {
  int i=0, j;          // variabel interasi
  int pilihan;         // variabel pilihan proses
  char pilihan2[100];  // variabel untuk melanjutkan atau keluar program
  mahasiswa alpro;     // variabel bungkusan
  int stop=1;          // variabel penanda berhenti atau tidaknya program
  // proses
  do {
    system("cls");  // menghapus layar
    readfile();     // pemanggilan file yang sudah dibaca
    int lenght=longerstr();		//panggil fungsi pencari nama terpanjang
    //print "-"" sesuai kebutuhan, menyesuaikan dengan nama terpanjang
    for (j = 0; j < lenght - 2 + 7 * 3; j += 1) {
      printf("-");
    }

    printf("\n");
    printf("|NIM     |Nama");
    //print spasi sesuai kebutuhan, menyesuaikan dengan nama terpanjang
    for (i = 0; i < lenght - 3; i += 1) {
      printf(" ");
    }
    printf(" |Kelas|\n");
    //print - sesuai kebutuhan, menyesuaikan dengan nama terpanjang
    for (j = 0; j < lenght - 2 + 7 * 3; j += 1) {
      printf("-");
    }
    printf("\n");
    for (i = 0; i < n; i += 1) {
      printf("|%s |%s", data[i].nim, data[i].nama);
      //print jarak nama dan garis pinggir 
      //sesuai kebutuhan, menyesuaikan dengan nama terpanjang
      for (j = 0; j < lenght-strlen(data[i].nama)+2; j += 1) {
        printf(" ");
      }
      printf("|%s", data[i].kelas);
      for (j = 0; j < 3; j += 1) {
        printf(" ");
      }
      printf("|\n");
    }
    for (j = 0; j < lenght - 2 + 7 * 3; j += 1) {
      printf("-");
    }
    printf("\n");

    // proses penampilan pilihan proses
    printf("Silahkan Masukan Pilihan Anda!\n");
    printf("\n");
    printf("--------Pilihan--------\n");
    printf("|");
    for (i = 0; i < strlen(data[i].nama) - 3; i += 1) {
      printf(" ");
    }
    printf("1. Cari Data        |\n");  // untuk mencari data
    printf("|");
    for (i = 0; i < strlen(data[i].nama) - 3; i += 1) {
      printf(" ");
    }
    printf("2. Tambah Data      |\n");  // untuk menambah data
    printf("|");
    for (i = 0; i < strlen(data[i].nama) - 3; i += 1) {
      printf(" ");
    }
    printf("3. Update Data      |\n");  // untuk update data
    printf("|");
    for (i = 0; i < strlen(data[i].nama) - 3; i += 1) {
      printf(" ");
    }
    printf("4. Delete Data      |\n");  // untuk update data
    printf("|");
    for (i = 0; i < strlen(data[i].nama) - 3; i += 1) {
      printf(" ");
    }
    //tambah menu exit
    printf("5. Exit Program     |\n");  // untuk hentikan program
    printf("-----------------------\n");
    printf("\n");

    // input pilihan proses
    scanf("%d", &pilihan);
    
    // jika pilihan no 1
    if (pilihan == 1) {
      // proses mencari data
      // input nim yang ingin dicari
      printf("Masukan NIM : ");
      scanf("%s", alpro.nim);
      // pemanggilan fungsi mencari
      if (finddata(alpro.nim) == 1) {
        printf("Data Ditemukan\n");
      } else {
        // jika nim tidak ada
        printf("Data Tidak Ditemukan\n");
      }
    }

    // jika pilihan 2
    else if (pilihan == 2) {
      // proses menambah data baru
      printf("Masukan NIM : ");
      scanf("%s", alpro.nim);
      printf("Masukan Nama : ");
      scanf("%s", alpro.nama);
      printf("Masukan kelas : ");
      scanf("%s", alpro.kelas);
      // pemanggilan prosedur menambah data
      insertdata(alpro);
    }

    // jika pilihan 3
    else if (pilihan == 3) {
      // proses mengupdate data
      // input nim yang akan diupdate
      printf("Masukan NIM : ");
      scanf("%s", alpro.nim);
      // pemanggilan prosedur update
      updatedata(alpro.nim);
    }

    // jika pilihan 4
    else if (pilihan == 4) {
      // proses menghapus data
      // input nim yang akan dihapus
      printf("Masukan NIM : ");
      scanf("%s", alpro.nim);
      // pemanggilan prosedur update
      deletedata(alpro.nim);
    }
    //jika pilihan 5
    
    if (pilihan ==5){
      stop=0;//hentikan proses langsung
    }else{
    	//jika exit tidak dipilih
	    // pilihan jika sudah selesai proses
	    printf("Apakah anda ingin keluar?");
	    // input jika ya maka akan keluar program, jika tidak kembali ke tampilan
	    // awal
	    printf("ya/tidak\n");
	    scanf("%s", pilihan2);
	    // proses akan terus mengulang jika jawaban bukan ya
    }
  } while (stop != 0 && strcmp(pilihan2,"ya")!=0);

  system("cls");  // menghapus layar
  return 0;
}