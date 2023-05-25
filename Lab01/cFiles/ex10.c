#include <stdio.h>
#include <stdlib.h>

/*
Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
em m/s.
*/

int main()
{
    float velKh, velMs;
    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &velKh);
    velMs = velKh/3.6;
    printf("Velocidade em m/s = %f \n", velMs);
    system("pause");
    return 0;
}