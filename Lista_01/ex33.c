#include <stdio.h>
#include <stdlib.h>

/*
Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

int main()
{
    float lado, area;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("Area = %f m2 \n",area);
    system("pause");
    return 0;
}