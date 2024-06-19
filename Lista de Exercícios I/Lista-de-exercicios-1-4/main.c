#include <stdio.h>

int main(void) {
  int cha = 0;

  printf("Digite um número inteiro positivo: ");
  scanf("%d",&cha);
  if(cha < 0){
    cha = cha * -1;
  }
  
 if(cha >= 33 && cha <= 126){
    printf("\n\nDecimal: %d\n\nOctal: %o\n\nHexadecimal: %x\n\nCaractere: %c",cha,cha,cha,cha);
  } 

  if(cha <= 32){
  cha = 32;
  printf("\n\nDecimal: %d\n\nOctal: %o\n\nHexadecimal: %x\n\nCaractere: %c ( Espaço )",cha,cha,cha,cha);
  }

  if(cha >= 127){
    cha = 127;
    printf("\n\nDecimal: %d\n\nOctal: %o\n\nHexadecimal: %x\n\nCaractere: %c ( DELETE )",cha,cha,cha,cha);
    }
  return 0;
}
