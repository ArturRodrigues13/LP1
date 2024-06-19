#include <stdio.h>
#include <string.h>
#include <locale.h>

int Quantidade;
char Artur[20][50];

void sorter();

int main() {

  setlocale(LC_ALL, "");

  int x;

  printf("Quantos nomes? ");
  scanf("%d", &Quantidade);

  printf("Digite %d nomes:\n\n", Quantidade);

  for( x = 0; x <= Quantidade; x++ )
    gets(Artur[x]);

  sorter();

  printf("\nNomes ordenados (A - Z):\n\n");

  for( x = 0; x <= Quantidade; x++ )
    puts(Artur[x]);

  printf("\nNomes ordenados (Z - A):\n\n");

  for( x = Quantidade; x >= 0; x-- )
    puts(Artur[x]);

  printf("\nPrimeiro Nome:\n\n");
  puts(Artur[1]);

  if ( Quantidade == 0 ) {

    printf("\nNome do meio:\n\n");
    puts(Artur[0]);

  }

  else if ( Quantidade % 2 == 0 ) {

    printf("\nNomes do meio:\n\n");
    puts(Artur[((Quantidade - 1) / 2) + 1]);
    puts(Artur[((Quantidade - 1) / 2) + 2]);

  }

  else {

    printf("\nNome do meio:\n\n");
    puts(Artur[(Quantidade - 1) / 2]);

  }

  printf("\nÚltimo Nome:\n\n");
  puts(Artur[Quantidade]);

  return 0;

}

void sorter() {

  int x, y, r;
  char aux[50];

  for( x = 0; x <= Quantidade; x++ ) {

    for( y = x + 1; y <= Quantidade; y++ ) {

      r = strcmp(Artur[x], Artur[y]);

      if( r > 0 ) {

        strcpy(aux, Artur[x]);
        strcpy(Artur[x], Artur[y]);
        strcpy(Artur[y], aux);

      }

    }

  }

}