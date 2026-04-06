#include <stdio.h>

int main() {

    float a1, a2, a3;

    printf("Digite o primeiro angulo: ");
    scanf("%f", &a1);

    printf("Digite o segundo angulo: ");
    scanf("%f", &a2);

    printf("Digite o terceiro angulo: ");
    scanf("%f", &a3);

    if (a1 > 90 || a2 > 90 || a3 > 90) {
        printf("Triangulo Obtusangulo\n");
    } 
    else if (a1 == 90 || a2 == 90 || a3 == 90) {
        printf("Triangulo Retangulo\n");
    } 
    else {
        printf("Triangulo Acutangulo\n");
    }

    return 0;
}