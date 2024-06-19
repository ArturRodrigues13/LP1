#include <stdio.h>
#include <stdlib.h>

int mdc(int valorA, int valorB);

int main(int argc, char *argv[]) {

  int valorA = atoi(argv[1]);
  int valorB = atoi(argv[2]);
  int resultado = 0;

  if ( valorB == 0 )
    printf("\nMDC de %i e %i = %i\n\n", valorA, valorB, valorA);

  else {

    resultado = mdc(valorA, valorB);

    printf("\nMDC de %i e %i = %i\n\n", valorA, valorB, resultado);

  }

  return 0;

}

int mdc(int valorA, int valorB) {

  int resto = 0;

  while ( (valorA % valorB) > 0 ) {

    resto = valorA % valorB;
    valorA = valorB;
    valorB = resto;

  }

  return valorB;

}