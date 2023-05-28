#include <stdio.h>
#include <stdlib.h>

/*
Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/

int main()
{
    float tempKelvin, converted;
    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &tempKelvin);
    converted = tempKelvin-273.15;
    printf("Temperatura em Celsius = %f \n", converted);
    system("pause");
    return 0;
}