#include <stdio.h>
#include <stdlib.h>
#define const 0.000247
/*
Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
acres
*/

int main()
{
    float m, a;
    printf("Digite a area em metros: ");
    scanf("%f", &m);
    a = m * const;
    printf("Area em acres = %f \n", a);
    system("pause");
    return 0;
}