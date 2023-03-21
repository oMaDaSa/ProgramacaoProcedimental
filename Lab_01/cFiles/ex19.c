#include <stdio.h>
#include <stdlib.h>
/*
Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
cúbicos
*/

int main()
{
    float vol, l;
    printf("Digite o volume em litros: ");
    scanf("%f", &l);
    vol = l / 1000;
    printf("Volume em m3 = %f \n", vol);
    system("pause");
    return 0;
}