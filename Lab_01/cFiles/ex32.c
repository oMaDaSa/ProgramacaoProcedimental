#include <stdio.h>
#include <stdlib.h>

/*
Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.
*/

int main()
{
    int x, antDob, sucTrip, soma;
    printf("Digite um inteiro: ");
    scanf("%d", &x);
    antDob = x*2 - 1;
    sucTrip = x*3 + 1;
    soma = antDob + sucTrip;
    printf("Soma eh = %d \n",soma);
    system("pause");
    return 0;
}