#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    novoSalario = salario + aumento;

    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}