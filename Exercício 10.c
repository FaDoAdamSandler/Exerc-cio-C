#include <stdio.h>

int main() {
    float valorHora, horas, salario;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &valorHora);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas);

    salario = valorHora * horas;

    printf("Salario do mes: R$ %.2f\n", salario);

    return 0;
}