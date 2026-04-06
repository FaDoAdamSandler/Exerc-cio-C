#include <stdio.h>

int main() {
    float potLampada, largura, comprimento;
    float area, potTotal;
    int lampadas;

    printf("Potencia da lampada (W): ");
    scanf("%f", &potLampada);

    printf("Largura do comodo (m): ");
    scanf("%f", &largura);

    printf("Comprimento do comodo (m): ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    potTotal = area * 18;

    lampadas = potTotal / potLampada;

    if (potTotal > lampadas * potLampada) {
        lampadas++;
    }

    // 4. Saída de dados
    printf("Numero de lampadas necessarias: %d\n", lampadas);

    return 0;
}