#include <stdio.h>
#include <stdlib.h>
#define const 0.91
/*
Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
*/

int main()
{
    float m, j;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &j);
    m = j * const;
    printf("Comprimento em metros = %f \n", m);
    system("pause");
    return 0;
}