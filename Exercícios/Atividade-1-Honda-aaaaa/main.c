
#include <stdio.h>

int main(void) {
//
  //Primeiro valor;
  float n1 = 0;

  //Segundo valor;
  float n2 = 0;

  //Tipo de operação.
  int operacao = 0;

  //Resultado da operação;
  float resultado = 0;

  printf("Escolha uma operação:\n\n");
        printf("1: Adição \n2: Subtração \n3: Multiplicação \n4: Divisão\n\n");
  scanf("%d", (&operacao));


  printf("\n\nValor 1: ");
  scanf("%g", (&n1));


  printf("\n\nValor 2: ");
  scanf("%g", (&n2));
  
  if (operacao == 1) {

    printf("\n\nOperacão: +");
    resultado = n1 + n2;

    }

  else if (operacao == 2) {

    printf("\n\nOperacão: -");
    resultado = n1 - n2;

  }
    
  else if (operacao == 3) {

    printf("\n\nOperacão: ×");
    resultado = n1 * n2;

    }

  else if (operacao == 4) {

    printf("\n\nOperacão: ÷");
    resultado = n1 / n2;
  }

  else {
    printf("\n\nOperação inválida.\n Tente novamente.");
  }

printf("\n\nResultado: %g", resultado);

  return 0;
}