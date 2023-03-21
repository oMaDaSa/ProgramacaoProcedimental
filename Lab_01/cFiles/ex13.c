#include <stdio.h>
#include <stdlib.h>

/*
Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
*/

int main()
{
    float milha, km;
    printf("Digite a distancia em Km: ");
    scanf("%f", &km);
    milha = km*1.61;
    printf("Distancia em Milha = %f \n", milha);
    system("pause");
    return 0;
}