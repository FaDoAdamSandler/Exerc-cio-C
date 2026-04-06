#include <stdio.h>

int main() {
    float n1, n2, n3, media; 

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = (n1*2 + n2*3 + n3*5) / 10;

    printf("Media: %.2f\n", media);

    return 0;
}