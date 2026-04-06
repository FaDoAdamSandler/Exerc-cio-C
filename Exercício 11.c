#include <stdio.h>

int main() {
    float total, brancos, nulos, validos;
    float percBrancos, percNulos, percValidos;

    printf("Digite o total de eleitores: ");
    scanf("%f", &total);

    printf("Digite o número de votos brancos: ");
    scanf("%f", &brancos);

    printf("Digite o número de votos nulos: ");
    scanf("%f", &nulos);

    printf("Digite o número de votos válidos: ");
    scanf("%f", &validos);

    percBrancos = (brancos / total) * 100;
    percNulos = (nulos / total) * 100;
    percValidos = (validos / total) * 100;

    printf("Percentual de brancos: %.2f%%\n", percBrancos);
    printf("Percentual de nulos: %.2f%%\n", percNulos);
    printf("Percentual de válidos: %.2f%%\n", percValidos);

    return 0;
}