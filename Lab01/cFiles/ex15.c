#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
/*
Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
G = R*180/pi, sendo G o ângulo em graus e R em radianos e pi = 3.141592.
*/

int main()
{
    float angGraus, angRad;
    printf("Digite o angulo em radianos: ");
    scanf("%f", &angRad);
    angGraus = (angRad*180)/pi;
    printf("Angulo em graus = %f \n", angGraus);
    system("pause");
    return 0;
}