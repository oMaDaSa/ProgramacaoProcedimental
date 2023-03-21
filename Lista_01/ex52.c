#include <stdio.h>
#include <stdlib.h>

/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
prêmio com base no valor investido.
*/

int main()
{
    float inv1, inv2, inv3, invTotal, premioTotal, premio1, premio2, premio3;

    printf("Insira o valor do premio: ");
    scanf("%f", &premioTotal);
    printf("Insira os valores investidos, em ordem: ");
    scanf("%f %f %f", &inv1, &inv2, &inv3);

    invTotal = inv1 + inv2 + inv3;
    premio1 = premioTotal * inv1 / invTotal;
    premio2 = premioTotal * inv2 / invTotal;
    premio3 = premioTotal * inv3 / invTotal;
    
    printf("Amigo 1 = %.2f reais \n", premio1);
    printf("Amigo 2 = %.2f reais \n", premio2);
    printf("Amigo 3 = %.2f reais \n", premio3);
    system("pause");

    return 0;
}