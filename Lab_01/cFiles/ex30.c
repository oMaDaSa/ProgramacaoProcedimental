#include <stdio.h>
#include <stdlib.h>

/*
Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.
*/

int main()
{
    float real, cot, dol;
    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cot);
    dol = real / cot;
    printf("Valor em dolares = %.2f \n", dol);
    system("pause");
    return 0;
}