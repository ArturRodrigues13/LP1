#include <stdio.h>
#include <string.h>

double temp(double calor,int desse,int praesse){

  if(desse == 1 && praesse == 3){
  calor += 273;
  } else if(desse == 3 && praesse == 1){
    calor -= 273;
  } else if(desse == 1 && praesse == 2){
  calor = 1.8 * calor + 32;
  } else if(desse == 2 && praesse == 1){
  calor = (calor - 32) / 1.8;
  } else if(desse == 2 && praesse == 3){
  calor = (calor + 459.67) / 1.8;
  } else {
  calor = calor * 1.8 - 459.67;
  }
  return calor;
}

int main(void) {
  int Artur = 0;
  char antes[10];
  int Artur_2 = 0;
  char depois[10];
  double calor1;
  double calor2;
  printf("Olá, por favor, diga o tipo de temperatura que você quer converter\n");
  printf("1 = Celsius\n2 = Farenheit\n3 = Kelvin\n");
  while(Artur != 1 && Artur != 2 && Artur != 3){
  printf("\nPor favor, digite um dos números previstos na tabela acima: ");
  scanf("%i",&Artur);
  }
  switch (Artur){
    case 1:
      strcpy(antes, "Celsius");
    break;
    case 2:
      strcpy(antes, "Farenheit");
    break;
    case 3:
      strcpy(antes, "Kelvin");
    break;
  }
  printf("\nAgora, me diga o seu valor: ");
  scanf("%lf",&calor1);
  printf("\nAgora, me diga para qual tipo de temperatura você quer converter\n");
  printf("1 = Celsius\n2 = Farenheit\n3 = Kelvin\n");
  while(Artur_2 != 1 && Artur_2 != 2 && Artur_2 != 3){
  printf("\nPor favor, digite um dos números previstos na tabela acima: ");
  scanf("%i",&Artur_2);
  }
  if(Artur == Artur_2){
  printf("\n\nVocê escolheu o mesmo tipo de temperatura para fazer a conversão, tente novamente");
  return 0;
  }
  switch (Artur_2){
    case 1:
      strcpy(depois, "Celsius");
    break;
    case 2:
      strcpy(depois, "Farenheit");
    break;
    case 3:
      strcpy(depois, "Kelvin");
    break;
  }

  calor2 = temp(calor1,Artur,Artur_2);

  printf("A temperatura %.2lf foi convertida de %s para %s, resultando em %.2lf",calor1,antes,depois,calor2);
  
  return 0;
}