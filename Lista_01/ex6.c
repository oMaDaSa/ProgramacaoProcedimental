#include <stdio.h>
#include <stdlib.h>

/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
*/

int main()
{
    float tempCelsius, converted;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);
    converted = tempCelsius*(9.0/5.0)+32.0;
    printf("Temperatura em Fahrenheit = %f \n", converted);
    system("pause");
    return 0;
}