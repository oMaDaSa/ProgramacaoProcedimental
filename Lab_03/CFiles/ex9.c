#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares
*/

int main(){
    int n = 0, i = 0, impar = 1;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &n);

    do{
        printf("%d\n",impar);
        impar += 2;
        i++;
    }while(i < n);

    system("pause");
    return 0;
}