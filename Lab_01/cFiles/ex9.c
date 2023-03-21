#include <stdio.h>
#include <stdlib.h>

/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/

int main()
{
    float tempCelsius, converted;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);
    converted = tempCelsius+273.15;
    printf("Temperatura em Kelvin = %f \n", converted);
    system("pause");
    return 0;
}