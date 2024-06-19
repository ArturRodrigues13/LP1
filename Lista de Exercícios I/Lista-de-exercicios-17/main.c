#include <stdio.h>

int main() {
    int Artur;

    scanf("%d", &Artur);

    int Artur_2 = Artur % 6;

    if (Artur_2 == 0) {
            Artur_2 = 6;
    }
   
    printf("O número %d convertido para um valor entre 1 e 6 é: %d\n", Artur, Artur_2);

    return 0;
}