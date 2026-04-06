#include <stdio.h>

int main() {
    float n1, n2, opt, media;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &n2);

    printf("Digite a nota da optativa (-1 se nao fez): ");
    scanf("%f", &opt);

    if (opt != -1) {
        if (n1 < n2) {
            n1 = opt;
        } else {
            n2 = opt;
        }
    }

    media = (n1 + n2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aprovado\n");
    } else if (media < 3.0) {
        printf("Reprovado\n");
    } else {
        printf("Exame\n");
    }

    return 0;
}