#include <stdio.h>

int main() {
    float custoFabrica, custoFinal;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica * (1 + 0.28 + 0.45);

    printf("Custo final ao consumidor: R$ %.2f\n", custoFinal);

    return 0;
}