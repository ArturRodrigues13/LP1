#include <stdio.h>


int main(void) {
  
int a = 0;
int b = 0;
int c = 0;

  printf("Digite dois números inteiros\n");
  scanf("%u%u",&a,&b);

  
  c = a + b;
  printf("\n\n%x",c);
  c = a * b;
  printf("\n\n%o",c);
  c = a - b;
  if(c - c <0){
    printf("\n\n-%d",c);
  } else{
    printf("\n\n%d",c);
  }
  
  
  if(b == 0){
  printf("\n\nO denominador está definido como 0, logo, a divisão não é possível");  
  } else {
  c = a / b;
  printf("\n\n%d",c);
  }
  if(a % b == 0){
  printf("\n\nA divisão foi feita de forma exata, com o resto sendo 0");
  } else{
    printf("\n\n%u não é divisivel de forma exata por %u",a,b);
    
  }
  
  return 0;
}