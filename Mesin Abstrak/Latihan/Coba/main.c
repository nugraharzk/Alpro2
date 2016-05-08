#include "mesinabstrak.h"

int main(){
	int s = 0;
  int ds = 0;

  char pita[50];
  printf("Masukkan pada kalimat pada pita\n");
  scanf("%49[^\n]s", pita);

  START(pita);

  while (EOP() == 0) {
    INC(pita);
    if (cc == ' ') {
      s += 1;
    } else {
      s = 0;
    }

    if (s == 2) {
      ds += 1;
    }
  }

  printf("%d\n", ds);

	return 0;
}