#include <stdio.h>
#include <stdlib.h>
/*
Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda
*/

int main()
{
    int dias;
    float pgt;
    printf("Insira quantos dias foram trabalhados: ");
    scanf("%d", &dias);
    pgt = (30 * dias) * 0.92;
    printf("Pagamento = %.2f reais \n",pgt);
    system("pause");
    return 0;
}