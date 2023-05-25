#include <stdio.h>
#include <stdlib.h>

/*
Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
M em m/s.
*/

int main()
{
    float velKh, velMs;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &velMs);
    velKh = velMs*3.6;
    printf("Velocidade em Km/h = %f \n", velKh);
    system("pause");
    return 0;
}