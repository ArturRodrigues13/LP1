#include <stdio.h>

int main(void) {
  int Artur = 0;

  scanf("%d",&Artur);


  (Artur >= -32768 && Artur <= 32767) ? printf("\nEsse valor, %d, pertence ao intervalo dos short int",Artur) : printf("\nEsse valor, %d, não pertence ao intervalo dos short int",Artur);

  return 0;
}