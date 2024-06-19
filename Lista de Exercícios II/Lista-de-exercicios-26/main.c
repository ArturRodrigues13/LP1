#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolarDado(int lados);
int sorteiosNecessarios(int lados);
void quantidadeSorteios(int lados, int sorteios);

int main(int argc, char *argv[]) {

  int escolhaLetra = atoi(argv[1]);
  int lados = atoi(argv[2]);
  int sorteios = atoi(argv[3]);
  int resultado = 0, totalSorteios = 0;

  srand(time(NULL));

  switch ( escolhaLetra ) {

    case 1:

      resultado = rolarDado(lados);

      printf("\nO resultado do dado é %i!\n", resultado);

    break;

    case 2:

      totalSorteios = sorteiosNecessarios(lados);

      printf("\nSão necessários %i sorteios para que cada valor"
            " seja sorteado ao menos uma vez.\n", totalSorteios);

    break;

    case 3:

      quantidadeSorteios(lados, sorteios);

    break;

  }

  return 0;

}

int rolarDado(int lados) {

  return rand() % lados + 1;

}

int sorteiosNecessarios(int lados) {

  int sorteio = 0, totalSorteios = 0;
  int i = 0;
  int dado[lados];

  for ( int i = 0; i < lados; i++ )
    dado[i] = 0;

  while ( i < lados ) {

    sorteio = rolarDado(lados);

    totalSorteios++;

    if ( dado[sorteio - 1] == 0 ) {

      dado[sorteio - 1] = 1;

      i++;

    }

  }

  return totalSorteios;

}

void quantidadeSorteios(int lados, int sorteios) {

  int dado[lados];

  for ( int i = 0; i < lados; i++ )
    dado[i] = 0;

  for ( int i = 0; i < sorteios; i++ ) {

    int sorteio = rolarDado(lados);

    dado[sorteio - 1]++;

  }

  for ( int i = 0; i < lados; i++ )
    printf("\n%2i = %i vezes!\n", i + 1, dado[i]);

}