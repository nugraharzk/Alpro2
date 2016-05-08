#include <stdio.h>
#include <string.h>

typedef struct{
	char nim[10];
	char nama[100];
	char nilai[20];
}bungkusan;

int main(){
	int n=0;
	int i,j;
	bungkusan a[100];
	FILE *fsumber;
	fsumber=fopen("data/tmahasiswa.txt","r");

	fscanf(fsumber,"%s %s %s\n",&a[n].nim,&a[n].nama,&a[n].nilai);

	while(strcmp(a[n].nim,"##")!=0 && strcmp(a[n].nama,"##")!=0 && strcmp(a[n].nama,"##")!=0){
		fscanf(fsumber,"%s %s %s\n",&a[n+1].nim,&a[n+1].nama,&a[n+1].nilai);
		n++;
	}
	fclose(fsumber);

	for(i = 0; i < n; i++){
		printf("%s %s %s\n", a[i].nim, a[i].nama, a[i].nilai);
	}

	return 0;
}