#include <stdio.h>
#include <stdlib.h>

/*
Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main()
{
    int x, ant, suc;
    printf("Digite um inteiro: ");
    scanf("%d", &x);
    ant = x - 1;
    suc = x + 1;
    printf("O antecessor eh %d e o sucessor eh %d \n",ant, suc);
    system("pause");
    return 0;
}