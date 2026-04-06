#include <stdio.h>

int main() {
    float metros;
    float centimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("Resultado: %.2f cm\n", centimetros);

    return 0;
}