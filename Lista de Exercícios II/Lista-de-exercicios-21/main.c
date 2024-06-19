#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Artur(char tecla);
void Artur_2(int sequencia);
void Artur_3(int sequencia);
void Artur_4(int sequencia);
void Artur_5(int primos);
void Artur_6(int perfeitos);

int main(int argc, char *argv[]) {

  int escolhaLetra = atoi(argv[1]);

  char tecla = *argv[2];
  int sequencia = atoi(argv[2]);
  int primos = atoi(argv[2]);
  int perfeitos = atoi(argv[2]);

  switch( escolhaLetra ) {

    case 1:

      Artur(tecla);

    break;

    case 2:

        Artur_2(sequencia);

    break;

    case 3:

        Artur_3(sequencia);

    break;

    case 4:

      Artur_4(sequencia);

    break;

    case 5:

      Artur_5(primos);

    break;

    case 6:

      Artur_6(perfeitos);

    break;

  }

  return 0;

}

void Artur(char tecla) {

  if ( isalnum(tecla) ) {

    printf("\nVocê digitou um alfanumérico!");

    if ( isdigit(tecla) )
      printf("\n\nVocê digitou um número!\n\n");

    else if ( isalpha(tecla) )
      printf("\n\nVocê digitou um caractere!\n\n");

  }

  else if ( isblank(tecla) )
    printf("\nVocê digitou um espaço em branco!\n\n");

  else
    printf("\nVocê não digitou um número ou um caractere!\n\n");

}

void Artur_2(int sequencia) {

  for ( int i = 0; i <= sequencia; i++ )
    printf("%i\n", i);

}

void Artur_3(int sequencia) {

  for ( int i = sequencia; i >= 0; i-- )
    printf("%i\n", i);

}

void Artur_4(int sequencia) {

  int i = 0, j = 0, k = sequencia;

  while ( i <= sequencia ) {

    printf("%i\n", j);

    j++;

    printf("%i\n", k);

    k--;

    i++;

  }

}

void Artur_5(int primos) {

  printf("\nOs números primos de 0 até %i são:\n\n", primos);

  for ( int i = 1; i <= primos; i++ ) {

    int j = 0;

    for ( j = 2; j < i; j++ )
      if ( i % j == 0 )
        break;

      if ( i == j )
        printf("%i\n", i);

  }

}

void Artur_6(int perfeitos) {

  printf("\nOs números perfeitos de 1 até %i são:\n\n", perfeitos);

  for ( int i = 1; i < perfeitos; i++ ) {

    int soma = 0;

    for ( int j = 1; j < i; j++ )
      if ( i % j == 0 )
        soma += j;

    if ( i == soma )
      printf("%i\n", soma);

  }

}
