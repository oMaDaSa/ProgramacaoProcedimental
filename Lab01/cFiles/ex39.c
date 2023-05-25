#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define premio 780000.00
/*
A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

int main()
{
    float primeiro = 0.46 * premio;
    float segundo = 0.32 * premio;
    float terceiro = (1 - 0.46 - 0.32) * premio;
    printf("Primeiro = %.2f reais \n",primeiro);
    printf("Segundo = %.2f reais \n",segundo);
    printf("Terceiro = %.2f reais \n",terceiro);
    system("pause");
    return 0;
}