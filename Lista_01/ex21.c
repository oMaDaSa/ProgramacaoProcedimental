#include <stdio.h>
#include <stdlib.h>
#define const 0.45
/*
Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras
*/

int main()
{
    float kg, l;
    printf("Digite a massa em libras: ");
    scanf("%f", &l);
    kg = l * const;
    printf("Massa em quilogramas = %f \n", kg);
    system("pause");
    return 0;
}