#include <stdio.h>
#include <stdlib.h>
/*
Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros
cúbicos.
*/

int main()
{
    float vol, l;
    printf("Digite o volume em m3: ");
    scanf("%f", &vol);
    l = vol * 1000;
    printf("Litros = %f \n", l);
    system("pause");
    return 0;
}