#include <stdio.h>

int main() {
    int Artur;
    int Artur_soma;

  printf("Digite um valor positivo: ");
  scanf("%d",&Artur);

    Artur = (Artur < 0) ? printf("\n\nValor negativo fornecido, o programa não funcionará corretamente\n\n") : printf("\n\nValor positivo fornecido, o programa funcionará corretamente\n\n");
  
    Artur_soma = Artur * (Artur + 1) / 2;

   
    printf("A soma dos números de 1 até %d é: %d\n", Artur, Artur_soma);

    return 0;
}