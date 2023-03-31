#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
*/

int main(){
    int n, nat = 0;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        printf("%d\n",nat);
        nat++;
    }


    system("pause");
    return 0;
}