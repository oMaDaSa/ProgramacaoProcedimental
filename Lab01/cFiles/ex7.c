#include <stdio.h>
#include <stdlib.h>

/*
Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
temperatura em Fahrenheit.
*/

int main()
{
    float tempFahrenheit, converted;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &tempFahrenheit);
    converted = (tempFahrenheit-32)/(9.0/5.0);
    printf("Temperatura em Celsius = %f \n", converted);
    system("pause");
    return 0;
}