#include <stdio.h>
#include <stdlib.h>

/*
Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.
*/

int main()
{
    float milha, km;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &milha);
    km = milha*1.61;
    printf("Distancia em Km = %f \n", km);
    system("pause");
    return 0;
}