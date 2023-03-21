#include <stdio.h>
#include <stdlib.h>
#define const 2.54
/*
Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.
*/

int main()
{
    float cm, p;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &p);
    cm = p*const;
    printf("Comprimento em centimetros = %f \n", cm);
    system("pause");
    return 0;
}