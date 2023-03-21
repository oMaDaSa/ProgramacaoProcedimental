#include <stdio.h>
#include <stdlib.h>
#define const 2.54
/*
Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.
*/

int main()
{
    float cm, p;
    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &cm);
    p = cm/const;
    printf("Comprimento em polegadas = %f \n", p);
    system("pause");
    return 0;
}