#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
/*
Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
R = G*pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592
*/

int main()
{
    float angGraus, angRad;
    printf("Digite o angulo em graus: ");
    scanf("%f", &angGraus);
    angRad = (angGraus*pi)/180;
    printf("Angulo em radianos = %f \n", angRad);
    system("pause");
    return 0;
}