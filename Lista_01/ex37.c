#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%.
*/

int main()
{
    float valorInicial, valorFinal;
    float desconto = 0.12;
    printf("Digite o valor em reais: ");
    scanf("%f", &valorInicial);
    valorFinal = valorInicial - valorInicial * desconto;  
    printf("Valor final = %.2f reais \n",valorFinal);
    system("pause");
    return 0;
}