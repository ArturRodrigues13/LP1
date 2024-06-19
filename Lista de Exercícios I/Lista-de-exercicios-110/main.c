#include <stdio.h>
#include <math.h>

int main(void) {
  double Artur;
  printf("Digite o lado do quadrado: ");
  scanf("%lf",&Artur);

  printf("A diagonal do quadrado é %.2f, o seu perímetro é %.2f e a sua área é %.2f",Artur * sqrt(2),Artur * 4,Artur * Artur);
  return 0;
}