#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592
/*
Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio2 * altura, onde pi =
3.141592
*/

int main()
{
    float r, h, hip, vol;
    printf("Digite o raio: ");
    scanf("%f", &r);
    printf("Digite a altura: ");
    scanf("%f", &h);
    vol = pi * r * r * h;
    printf("hipotenusa = %f \n",vol);
    system("pause");
    return 0;
}