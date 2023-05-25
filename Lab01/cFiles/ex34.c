#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
/*
Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
área do círculo é pi*raio2
, considere pi = 3.141592.

*/

int main()
{
    float ray, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &ray);
    area = ray * ray * pi;
    printf("Area = %f u.a \n",area);
    system("pause");
    return 0;
}