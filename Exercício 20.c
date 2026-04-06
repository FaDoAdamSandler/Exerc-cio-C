#include <stdio.h>

int main() {
    float kmInicial, kmFinal, litros, valorRecebido;
    float distancia, consumo, custoCombustivel, lucro;

    printf("Km inicial: ");
    scanf("%f", &kmInicial);

    printf("Km final: ");
    scanf("%f", &kmFinal);

    printf("Litros de combustivel gastos: ");
    scanf("%f", &litros);

    printf("Valor total recebido: ");
    scanf("%f", &valorRecebido);

    distancia = kmFinal - kmInicial;
    consumo = distancia / litros;
    custoCombustivel = litros * 2.90;
    lucro = valorRecebido - custoCombustivel;

    printf("Consumo medio: %.2f Km/L\n", consumo);
    printf("Lucro liquido do dia: R$ %.2f\n", lucro);

    return 0;
}