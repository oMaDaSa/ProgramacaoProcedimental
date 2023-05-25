#include <stdio.h>
#include <stdlib.h>
#define const 10000
/*
Leia quatro notas, calcule a média aritmética e imprima o resultado
*/

int main()
{
    float w, x, y, z, med;
    printf("Digite os valores: ");
    scanf("%f %f %f %f", &w, &x, &y, &z);
    med = (w+x+y+z)/4;
    printf("Media = %f \n", med);
    system("pause");
    return 0;
}