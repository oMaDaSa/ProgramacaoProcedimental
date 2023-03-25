#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
CUSTO DE FÁBRICA % DO DISTRIBUIDOR % DOS IMPOSTOS
até R$12.000,00 5 isento
entre R$12.000,00 e R$25.000,00 10 15
acima de R$25.000,00 15 20
*/

int main(){
    float custoFabrica, comissao, imposto, custoFinal;
    
    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    if(custoFabrica <= 12000){
        comissao = 0.05 * custoFabrica;
        imposto = 0;
    }else if(custoFabrica <= 25000){
        imposto = 0.15 * custoFabrica;
        comissao = 0.10 * custoFabrica;
    }else{
        imposto = 0.20 * custoFabrica;
        comissao = 0.15 * custoFabrica;
    }
    
    custoFinal = custoFabrica + comissao + imposto;
    printf("Custo final: R$%.2f\n", custoFinal);

    system("pause");
    return 0;
}