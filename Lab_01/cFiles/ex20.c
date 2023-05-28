#include <stdio.h>
#include <stdlib.h>
#define const 0.45
/*
Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras
*/

int main()
{
    float kg, l;
    printf("Digite a massa em quilogramas: ");
    scanf("%f", &kg);
    l = kg / const;
    printf("Massa em libras = %f \n", l);
    system("pause");
    return 0;
}