#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    float areaParedes;
    int caixas;

    printf("Digite o comprimento da cozinha (m): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da cozinha (m): ");
    scanf("%f", &largura);

    printf("Digite a altura da cozinha (m): ");
    scanf("%f", &altura);

    areaParedes = 2 * altura * (comprimento + largura);

    caixas = areaParedes / 1.5;

    if (areaParedes > caixas * 1.5) {
        caixas++;
    }

    printf("Quantidade de caixas de azulejos: %d\n", caixas);

    return 0;
}