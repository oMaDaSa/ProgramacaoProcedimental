#include <stdio.h>
#include <stdlib.h>

/*
Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos.
*/

int main()
{
    float x, y, z, soma;
    printf("Digite os valores: ");
    scanf("%f %f %f", &x, &y, &z);
    soma = (x * x) + (y * y) + (z * z);
    printf("Soma dos quadrados = %f \n", soma);
    system("pause");
    return 0;
}