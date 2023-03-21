#include <stdio.h>
#include <stdlib.h>
#define const 0.91
/*
Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
*/

int main()
{
    float m, j;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &m);
    j = m / const;
    printf("Comprimento em jardas = %f \n", j);
    system("pause");
    return 0;
}