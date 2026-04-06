#include <stdio.h>

int main() {
    float comprimento, comprimentoKm, consumo;
    int totalVoltas, reabastecimentos;
    float voltasPorTrecho, distancia, litros;

    printf("Comprimento da pista (m): ");
    scanf("%f", &comprimento);

    printf("Numero total de voltas: ");
    scanf("%d", &totalVoltas);

    printf("Numero de reabastecimentos: ");
    scanf("%d", &reabastecimentos);

    printf("Consumo do carro (Km/L): ");
    scanf("%f", &consumo);

    voltasPorTrecho = totalVoltas / (reabastecimentos + 1);
    comprimentoKm = comprimento / 1000;
    distancia = voltasPorTrecho * comprimentoKm;
    litros = distancia / consumo;

    printf("Litros necessarios ate o primeiro abastecimento: %.2f\n", litros);

    return 0;
}