#include <stdio.h>

int main() {
    int a, b, op;
    float resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Escolha a operacao (1-Adicao, 2-Subtracao, 3-Divisao, 4-Multiplicacao): ");
    scanf("%d", &op);
    
    if (op == 1) {
        resultado = a + b;
        printf("Resultado: %.2f\n", resultado);
    } 
    else if (op == 2) {
        resultado = a - b;
        printf("Resultado: %.2f\n", resultado);
    } 
    else if (op == 3) {
        resultado = (float)a / b;
        printf("Resultado: %.2f\n", resultado);
    } 
    else if (op == 4) {
        resultado = a * b;
        printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}