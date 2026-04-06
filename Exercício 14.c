#include <stdio.h>

int main() {
   
    int numCarros;
    float totalVendas, salarioFixo, valorPorCarro;
    float comissaoCarros, comissaoVendas, salarioFinal;

    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarros);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &totalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor ganho por carro vendido: ");
    scanf("%f", &valorPorCarro);

    comissaoCarros = numCarros * valorPorCarro;
    comissaoVendas = totalVendas * 0.05;
    salarioFinal = salarioFixo + comissaoCarros + comissaoVendas;

    printf("\n--- RESULTADO ---\n");
    printf("Comissao por carros: R$ %.2f\n", comissaoCarros);
    printf("Comissao por vendas (5%%): R$ %.2f\n", comissaoVendas);
    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}