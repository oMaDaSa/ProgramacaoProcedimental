#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + b2. Faça um programa que receba os valores de a e b e calcule o valor da
hipotenusa através da equação. Imprima o resultado dessa operação
*/

int main()
{
    float a, b, hip;
    printf("Digite o cateto a: ");
    scanf("%f", &a);
    printf("Digite o cateto b: ");
    scanf("%f", &b);
    hip = sqrt((a * a) + (b * b));
    printf("hipotenusa = %f \n",hip);
    system("pause");
    return 0;
}