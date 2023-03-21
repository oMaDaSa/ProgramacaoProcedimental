#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3x sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
*/

int main()
{
    float preco, precoDesc, parcela, comissaoVista, comissaoParcela;

    printf("Insira o preco em reais: ");
    scanf("%f", &preco);

    precoDesc = preco * 0.9;
    parcela = preco/3;
    comissaoVista = precoDesc * 0.05;
    comissaoVista = precoDesc * 0.05;
    comissaoParcela = preco * 0.05;

    printf("Total a pagar com desconto: %.2f reais \n", precoDesc);
    printf("valor de cada parcela (3x sem juros): 3x de %.2f reais \n", parcela);
    printf("Comissao (a vista): %.2f reais \n", comissaoVista);
    printf("Comissao parcelada: %.2f reais \n", comissaoParcela);
    system("pause");

    return 0;
}