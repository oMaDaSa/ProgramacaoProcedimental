#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
calculado.
*/
int main()
{
    int nHora;
    float reaisHora, salario;
    printf("Insira o salario por hora trabalhada: ");
    scanf("%f", &reaisHora);
    printf("Insira a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &nHora);
    salario = reaisHora * nHora * 1.10;
    printf("Salario = %.2f \n",salario);
    system("pause");
    return 0;
}
