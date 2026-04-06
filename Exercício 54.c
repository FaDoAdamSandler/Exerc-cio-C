#include <stdio.h>

int main() {
    int lados;
    float medida, perimetro, area;

    printf("Digite o numero de lados: ");
    scanf("%d", &lados);

    printf("Digite a medida do lado (cm): ");
    scanf("%f", &medida);

    if (lados == 3) {
        perimetro = lados * medida;
        printf("TRIANGULO\n");
        printf("Perimetro: %.2f cm\n", perimetro);
    } 
    else if (lados == 4) {
        area = medida * medida;
        printf("QUADRADO\n");
        printf("Area: %.2f cm2\n", area);
    } 
    else if (lados == 5) {
        printf("PENTAGONO\n");
    }

    return 0;
}