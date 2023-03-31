#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78
*/

int main(){
    int soma = 0, div, n;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &n);

    for(int i=1; i<=(n/2); i++){
        if(n%i==0){
            soma += i;
        }
    }

    printf("soma: %d\n",soma); 
    system("pause");
    return 0;
}