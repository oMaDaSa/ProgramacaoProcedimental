#include <stdio.h>
#include <stdlib.h>
//Leia um número real e imprima a quinta parte deste número
int main()
{
    float x, quint;
    printf("Digite 1 numero real: ");
    scanf("%f", &x);
    quint = x/5;
    printf("Quinta parte = %f \n", quint);
    system("pause");
    return 0;
}