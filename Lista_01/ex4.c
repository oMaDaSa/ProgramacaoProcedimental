#include <stdio.h>
#include <stdlib.h>
//Leia um número real e imprima o resultado do quadrado desse número.
int main()
{
    float x, quadrado;
    printf("Digite 1 numero real: ");
    scanf("%f", &x);
    quadrado = x * x;
    printf("Quadrado = %f \n", quadrado);
    system("pause");
    return 0;
}