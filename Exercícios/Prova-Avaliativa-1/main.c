#include <stdio.h>
#include <math.h>

double Arredonda(double numero) {
    double factor = 10.0;
    return ceil(numero * factor) / factor;
}

float Calculo(int Cred){
  int Total = 0;
  printf("\n\x1b[1mMe diga quantas notas diferentes você acumulou durante a matéria:\x1b[0m  ");
  scanf("%d",&Total);
  double Notas[Total];
  double Peso[Total];
  double PesoTotal = 0;
  float Acumulado = 0;

  for(int i = 0; i < Total; i += 1){
    printf("\n\x1b[1mEntre com a sua Nota (0 a 10):  \x1b[0m");
    scanf("%lf",&Notas[i]);
    if(Notas[i] < 0 || Notas[i] > 10){
    printf("\nNota inválida, tente novamente");
    i -= 1;
    }
    printf("\n\x1b[1mAgora me diga o peso dela (0 a 10):\x1b[0m  ");
    scanf("%lf",&Peso[i]);
    if(Peso[i] < 0 || Peso[i] > 10){
    printf("\nPeso inválido, tente novamente");
    i -= 1;
    }
    Acumulado += Notas[i] * Peso[i];
    PesoTotal += Peso[i];
    
    }

  return Acumulado / PesoTotal;
}

int main(void) {
  int Cred = 0;
  int Faltas = 0;
  float Media = 0;
  float Acumulado = 0;

  printf("\n\x1b[1mDiga a quantidade de créditos da matéria que você deseja calcular:\x1b[0m ");
  scanf("%d",&Cred);
  int MaxFaltas = (15 * Cred) / 4;
  if (Cred < 2 || Cred > 10){
  printf("Quantidade de Créditos inválida");
  return 0;
  }
  printf("\n\x1b[1mAntes de tudo, me diga a quantidade de faltas (Aulas, não dias) que você acumulou nessa matéria:\x1b[0m  ");
  scanf("%d",&Faltas);
  if(Faltas >= MaxFaltas){
  printf("\nInfelizmente você ultrapassou o limite máximo de faltas que você poderia acumular nessa matéria, que eram de %d, e está reprovado, boa sorte no próximo semestre!!!",MaxFaltas);
  return 0;
  }
  Media = Calculo(Cred);
  
  if(Media >= 7){
    printf("\nSua média é de \x1b[32m\x1b[1m%.1f\x1b[0m, meus parabéns, passou direto GOAT!!!",Arredonda(Media));
    printf("\n\n---------------------------------------------------\n\x1b[1m                  Ficha do aluno\x1b[0m\n---------------------------------------------------\nSituação - \x1b[32m\x1b[1mAprovado :)\x1b[0m\n---------------------------------------------------\nMédia Final - \x1b[36m\x1b[1m%.1lf\x1b[0m\n---------------------------------------------------\nQuantidade de Faltas - \x1b[36m\x1b[1m%d (%d Para Reprovação)\x1b[0m\n---------------------------------------------------\n",Media,Faltas,MaxFaltas);
    
  } else if(Media < 7 && Media > 2.66){
    float prapassar = (5 - Media * 0.6) / 0.4;
    printf("\nSua média é de \x1b[31m\x1b[1m%.1f\x1b[0m, vai ter que estar fazendo prova final meu anjo. A nota miníma necessária pra tu passar é de \x1b[32m\x1b[1m%.1f\x1b[0m",Arredonda(Media),prapassar);

  printf("\n\nDigite sua nota na prova final:  ");
  double Final = 0;
  scanf("%lf",&Final);

  if(Final < prapassar){
  printf("\nInfelizmente não foi o suficiente, boa sorte no próximo semestre!!!");
  Media = Arredonda(Media * 0.6 + Final * 0.4);
  printf("\n\n---------------------------------------------------\n\x1b[1m                  Ficha do aluno\x1b[0m\n---------------------------------------------------\nSituação - \x1b[31m\x1b[1mReprovado :(\x1b[0m\n---------------------------------------------------\nMédia Final - \x1b[36m\x1b[1m%.1lf\x1b[0m\n---------------------------------------------------\nQuantidade de Faltas - \x1b[36m\x1b[1m%d (%d Para Reprovação)\x1b[0m\n---------------------------------------------------\n",Media,Faltas,MaxFaltas);
  } else {
  Media = Arredonda(Media * 0.6 + Final * 0.4);
  printf("\nParabéns, sua nota foi o suficiente, você está aprovado!!!\n");
    printf("\n\n---------------------------------------------------\n\x1b[1m                  Ficha do aluno\x1b[0m\n---------------------------------------------------\nSituação - \x1b[32m\x1b[1mAprovado :)\x1b[0m\n---------------------------------------------------\nMédia Final - \x1b[36m\x1b[1m%.1lf\x1b[0m\n---------------------------------------------------\nQuantidade de Faltas - \x1b[36m\x1b[1m%d (%d Para Reprovação)\x1b[0m\n---------------------------------------------------\n",Media,Faltas,MaxFaltas);
    
  }
  } else {
    printf("\nSua média é de %.1f, infelizmente nem prova final você vai poder estar fazendo... tá reprovado, boa sorte no próximo semestre!!!",Arredonda(Media));
    printf("\n\n---------------------------------------------------\n\x1b[1m                  Ficha do aluno\x1b[0m\n---------------------------------------------------\nSituação - \x1b[31m\x1b[1mReprovado :(\x1b[0m\n---------------------------------------------------\nMédia Final - \x1b[36m\x1b[1m%.1lf\x1b[0m\n---------------------------------------------------\nQuantidade de Faltas - \x1b[36m\x1b[1m%d (%d Para Reprovação)\x1b[0m\n---------------------------------------------------\n",Media,Faltas,MaxFaltas);
  }
  return 0;
}