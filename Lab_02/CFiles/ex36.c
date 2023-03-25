#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. Para calcular a comissão, considere a tabela abaixo:
Venda mensal                                                     Comissão
Maior ou igual a R$100.000,00                          R$700,00 + 16% das vendas
Menor que R$100.000,00 e maior ou igual a R$80.000,00 R$650,00 + 14% das vendas
Menor que R$80.000,00 e maior ou igual a R$60.000,00 R$600,00 + 14% das vendas
Menor que R$60.000,00 e maior ou igual a R$40.000,00 R$550,00 + 14% das vendas
Menor que R$40.000,00 e maior ou igual a R$20.000,00 R$500,00 + 14% das vendas
Menor que R$20.000,00                                  R$400,00 + 14% das vendas
*/

int main(){
    float valor, com;
    
    printf("Digite o valor da venda: ");
    scanf("%f",&valor);

    if(valor < 20000){
        com = 400 + valor*0.14;
    }else if(valor < 40000){
        com = 500 + valor*0.14;
    }else if(valor < 60000){
        com = 550 + valor*0.14;
    }else if(valor < 80000){
        com = 600 + valor*0.14;
    }else if(valor < 100000){
        com = 650 + valor*0.14;
    }else{
        com = 700 + valor*0.16;
    }

    printf("Comissao: R$%.2f\n",com);
    system("pause");
    return 0;
}