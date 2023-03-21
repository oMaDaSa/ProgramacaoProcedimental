#include <stdio.h>
#include <stdlib.h>
#define const 0.0001
/*
Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
hectares
*/

int main()
{
    float m, h;
    printf("Digite a area em metros quadrados: ");
    scanf("%f", &m);
    h = m * const;
    printf("Area em hectares = %f \n", h);
    system("pause");
    return 0;
}