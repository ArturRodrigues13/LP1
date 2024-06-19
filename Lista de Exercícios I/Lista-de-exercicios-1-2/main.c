#include <stdio.h>

int main(void){
char ch1;
char ch2;
char ch3;
int resp = 0;

ch2 = 81;

ch3 = 113;

scanf("%c", &ch1);

 resp = (ch1 >= 97 && ch1 <= 122) ? 1 : resp;
 resp = (ch1 >= 65 && ch1 <= 90) ? 2 : resp;
 resp = (ch1 >= 48 && ch1 <= 57) ? 3 : resp;
 if (resp == 0){
   resp = 4;
 }

  if(resp == 1){
  printf("Você escreveu a letra minuscula %c, localizado entre a e z",ch1);
  } else if(resp == 2){
    printf("Você escreveu a letra maiuscula %c, localizado entre A e Z",ch1);
    } else if(resp == 3){
  printf("Você escreveu o dígito %c, localizado entre 0 e 9",ch1);
  } else if(resp == 4){
    printf("Você escreveu o símbolo %c",ch1);
  }

  printf("\n\nch2:\n\nInteiro decimal: %u\nOctal: %o\nHexadecimal: %x\nCaractere: %c",ch2,ch2,ch2,ch2);

  printf("\n\nch3:\n\nInteiro decimal: %u\nOctal: %o\nHexadecimal: %x\nCaractere: %c",ch3,ch3,ch3,ch3);

return 0;
}