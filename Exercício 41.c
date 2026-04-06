#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 == n2) {
        printf("Numeros iguais\n");
    } else if (n1 > n2) {
        printf("Primeiro e maior\n");
    } else {
        printf("Segundo maior\n");
    }

    return 0;
}