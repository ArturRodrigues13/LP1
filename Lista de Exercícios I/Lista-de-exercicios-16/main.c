#include <stdio.h>

int main(void) {
  unsigned long int Artur;
  

  scanf("%lu",&Artur);

  (Artur >= 0 && Artur <= 2147483647) ? printf("\nEsse valor, %lu, pertence ao intervalo dos int",Artur) : printf("\nEsse valor, %lu, é maior do que o intervalo dos int",Artur);

  return 0;
}