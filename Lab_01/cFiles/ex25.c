#include <stdio.h>
#include <stdlib.h>
#define const 4048.58
/*
Leia um valor de área em acres e apresente-o convertido em metros quadrados m2
. A fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em
acres.
*/

int main()
{
    float m, a;
    printf("Digite a area em acres: ");
    scanf("%f", &a);
    m = a * const;
    printf("Area em metros quadradros = %f \n", m);
    system("pause");
    return 0;
}