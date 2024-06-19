//Artur Rodrigues Santos 202410508

//Achar um de cada vez

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int parada = 1, parada2 = 1, parada3 = 1, parada4 = 1, parada5 = 1, parada6 = 1;
  int num1,num2,num3,num4,num5,num6 = 0;
  int contagem = 0;

  scanf("%d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6);

if(num1 < 0 || num1 > 60 ){
  printf("O seu primeiro número é inválido, tente novamente");
  return 0;
} else if(num2 < 0 || num2 > 60 ){
    printf("O seu segundo número é inválido, tente novamente");
  return 0;
  } else if(num3 < 0 || num3 > 60 ){
    printf("O seu terceiro número é inválido, tente novamente");
  return 0;
  } else if(num4 < 0 || num4 > 60 ){
    printf("O seu quarto número é inválido, tente novamente");
  return 0;
  } else if(num5 < 0 || num5 > 60 ){
    printf("O seu quinto número é inválido, tente novamente");
  return 0;
  } if(num6 < 0 || num6 > 60 ){
    printf("O seu sexto número é inválido, tente novamente");
  return 0;
  }

srand(time(NULL));

int sorteio = rand() % 60 + 1;


while(parada || parada2 || parada3 || parada4 || parada5 || parada6){

  contagem +=1;

  
    sorteio = rand() % 60 + 1;
  //printf("\n1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n",sorteio,sorteio2,sorteio3,sorteio4,sorteio5,sorteio6);

if(parada != 0){
  if(sorteio == num1){
    printf("\nOpa, achou o %d na rodada %d, parabéns, tá rico\n",sorteio,contagem - 1);
    sorteio = rand() % 60 + 1;
    parada = 0;
  } else {
    printf("\n1: %d\n",sorteio);
    sorteio = rand() % 60 + 1;
  }
}

if(parada2 != 0){
  if(sorteio == num2){
    printf("\nOpa, achou o %d na rodada %d, parabéns, tá rico\n",sorteio,contagem - 1);
    sorteio = rand() % 60 + 1;
    parada2 = 0;
  } else {
    printf("\n2: %d\n",sorteio);
    sorteio = rand() % 60 + 1;
  } 
}

  if(parada3 != 0){
  if(sorteio == num3){
    printf("\nOpa, achou o %d na rodada %d, parabéns, tá rico\n",sorteio,contagem - 1);
    sorteio = rand() % 60 + 1;
    parada3 = 0;
  } else {
    printf("\n3: %d\n",sorteio);
    sorteio = rand() % 60 + 1;
  }
}

  if(parada4 != 0){
  if(sorteio == num4){
    printf("\nOpa, achou o %d na rodada %d, parabéns, tá rico\n",sorteio,contagem - 1);
    sorteio = rand() % 60 + 1;
    parada4 = 0;
  } else {
    printf("\n4: %d\n",sorteio);
    sorteio = rand() % 60 + 1;
  }
}

  if(parada5 != 0){
  if(sorteio == num5){
    printf("\nOpa, achou o %d na rodada %d, parabéns, tá rico\n",sorteio,contagem - 1);
    parada5 = 0;
    sorteio = rand() % 60 + 1;
  } else {
    sorteio = rand() % 60 + 1;
    printf("\n5: %d\n",sorteio);
  }
}

  if(parada6 != 0){
  if(sorteio == num6){
    printf("\nOpa, achou o %d na rodada %d, parabéns, tá rico\n",sorteio,contagem - 1);
    parada6 = 0;
    sorteio = rand() % 60 + 1;
  } else {
    sorteio = rand() % 60 + 1;
    printf("\n6: %d\n",sorteio);
  }
}
 

  } 

  printf("\n\n%d %d %d %d %d %d",num1,num2,num3,num4,num5,num6);

  return 0;
}
*/


//Achar os 6 ao mesmo tempo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int parada,parada2,parada3,parada4,parada5,parada6 = 0;
  int num1,num2,num3,num4,num5,num6 = 0;
  int contagem = 0;
  int limite = 60;
  scanf("%d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6);

  if(num1 < 1 || num1 > limite ){
    printf("O seu primeiro número é inválido, tente novamente");
    return 0;
  } else if(num2 < 1 || num2 > limite ){
      printf("O seu segundo número é inválido, tente novamente");
    return 0;
    } else if(num3 < 1 || num3 > limite ){
      printf("O seu terceiro número é inválido, tente novamente");
    return 0;
    } else if(num4 < 1 || num4 > limite ){
      printf("O seu quarto número é inválido, tente novamente");
    return 0;
    } else if(num5 < 1 || num5 > limite ){
      printf("O seu quinto número é inválido, tente novamente");
    return 0;
    } if(num6 < 1 || num6 > limite ){
      printf("O seu sexto número é inválido, tente novamente");
    return 0;
    }

  
srand(time(NULL));

int sorteio = rand() % limite + 1,sorteio2 = rand() % limite + 1,sorteio3 = rand() % limite + 1,sorteio4 = rand() % limite + 1,sorteio5 = rand() % limite + 1,sorteio6 = rand() % limite + 1;



while(parada == 0 || parada2 == 0 || parada3 == 0 || parada4 == 0 || parada5 == 0 || parada6 == 0){

  contagem +=1;
  parada = 0;
  parada2 = 0;
  parada3 = 0;
  parada4 = 0;
  parada5 = 0;
  parada6 = 0;

  sorteio = rand() % limite + 1;
  sorteio2 = rand() % limite + 1;
  sorteio3 = rand() % limite + 1;
  sorteio4 = rand() % limite + 1;
  sorteio5 = rand() % limite + 1;
  sorteio6 = rand() % limite + 1;
  
    printf("\n1: %d\n",sorteio);
    printf("\n2: %d\n",sorteio2);
    printf("\n3: %d\n",sorteio3);
    printf("\n4: %d\n",sorteio4);
    printf("\n5: %d\n",sorteio5);
    printf("\n6: %d\n",sorteio6);

    parada = (sorteio == num1) ? 1 : parada;
    parada2 = (sorteio == num2) ? 1 : parada2;
    parada3 = (sorteio == num3) ? 1 : parada3;
    parada4 = (sorteio == num4) ? 1 : parada4;
    parada5 = (sorteio == num5) ? 1 : parada5;
    parada6 = (sorteio == num6) ? 1 : parada6;

    parada = (sorteio2 == num1) ? 1 : parada;
    parada2 = (sorteio2 == num2) ? 1 : parada2;
    parada3 = (sorteio2 == num3) ? 1 : parada3;
    parada4 = (sorteio2 == num4) ? 1 : parada4;
    parada5 = (sorteio2 == num5) ? 1 : parada5;
    parada6 = (sorteio2 == num6) ? 1 : parada6;

    parada = (sorteio3 == num1) ? 1 : parada;
    parada2 = (sorteio3 == num2) ? 1 : parada2;
    parada3 = (sorteio3 == num3) ? 1 : parada3;
    parada4 = (sorteio3 == num4) ? 1 : parada4;
    parada5 = (sorteio3 == num5) ? 1 : parada5;
    parada6 = (sorteio3 == num6) ? 1 : parada6;

    parada = (sorteio4 == num1) ? 1 : parada;
    parada2 = (sorteio4 == num2) ? 1 : parada2;
    parada3 = (sorteio4 == num3) ? 1 : parada3;
    parada4 = (sorteio4 == num4) ? 1 : parada4;
    parada5 = (sorteio4 == num5) ? 1 : parada5;
    parada6 = (sorteio4 == num6) ? 1 : parada6;

    parada = (sorteio5 == num1) ? 1 : parada;
    parada2 = (sorteio5 == num2) ? 1 : parada2;
    parada3 = (sorteio5 == num3) ? 1 : parada3;
    parada4 = (sorteio5 == num4) ? 1 : parada4;
    parada5 = (sorteio5 == num5) ? 1 : parada5;
    parada6 = (sorteio5 == num6) ? 1 : parada6;

    parada = (sorteio6 == num1) ? 1 : parada;
    parada2 = (sorteio6 == num2) ? 1 : parada2;
    parada3 = (sorteio6 == num3) ? 1 : parada3;
    parada4 = (sorteio6 == num4) ? 1 : parada4;
    parada5 = (sorteio6 == num5) ? 1 : parada5;
    parada6 = (sorteio6 == num6) ? 1 : parada6;

  printf("\n%d %d %d %d %d %d\n\nTentativa: %d\n",parada,parada2,parada3,parada4,parada5,parada6,contagem);

  if(parada == 1 && parada2 == 1 && parada3 == 1 && parada4 == 1 && parada5 == 1 && parada6 == 1 && contagem < 1000000){
    printf("\ndemorou muitão pqp, enfim, você achou todos os números ao mesmo tempo na rodada %d, parabéns",contagem);
  } else if(parada == 1 && parada2 == 1 && parada3 == 1 && parada4 == 1 && parada5 == 1 && parada6 == 1 && contagem >= 1000000){
    printf("\nDEMOROU PARA UM CARALHO, enfim, já tava na rodada %d slc",contagem);
    return 0;
  }
  
    
}

  printf("\n\n%d %d %d %d %d %d",num1,num2,num3,num4,num5,num6);

  return 0;
}
