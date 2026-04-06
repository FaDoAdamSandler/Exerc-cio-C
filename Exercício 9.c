#include <stdio.h>

int main() {
    float lado, area, dobro;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    dobro = area * 2;

    printf("O dobro da area é: %.2f\n", dobro);

    return 0;
}