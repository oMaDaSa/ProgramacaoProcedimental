#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares
*/

int main(){
    int i = 0, par = 2, soma = 0;

    do{
        soma += par;
        par += 2;
        i++;
    }while(i < 50);

    printf("A soma dos primeiro 50 pares eh = %d\n", soma);

    system("pause");
    return 0;
}