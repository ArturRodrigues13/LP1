#include <stdio.h>
#include <math.h>

int main(void) {
  float x;
  float y;
  float z;

  printf("Digite dois números reais: ");
  scanf("%f",&x); scanf("%f",&y);

  if (x > 0 && y > 0) {
    printf("O ponto (%.2f, %.2f) está no primeiro quadrante (direita da curva).\n", x, y);
  } else if (x < 0 && y > 0) {
    printf("O ponto (%.2f, %.2f) está no segundo quadrante (esquerda da curva).\n", x, y);
  } else if (x < 0 && y < 0) {
    printf("O ponto (%.2f, %.2f) está no terceiro quadrante (esquerda da curva).\n", x, y);
  } else if (x > 0 && y < 0) {
    printf("O ponto (%.2f, %.2f) está no quarto quadrante (direita da curva).\n", x, y);
  } else if (x == 0 && y != 0) {
    printf("O ponto (%.2f, %.2f) está no eixo y (na curva).\n", x, y);
  } else if (x != 0 && y == 0) {
    printf("O ponto (%.2f, %.2f) está no eixo x (na curva).\n", x, y);
  } else {
    printf("O ponto (%.2f, %.2f) está na origem (na curva).\n", x, y);
  }

  z = sqrt(x * x + y * y);

  float produto = x * y;
  printf("\nO produto de %.2f e %.2f é: %e\n", x, y, produto);
  
  return 0;
}