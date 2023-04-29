#include <stdio.h>

/*Faça um programa que receba 6 números inteiros e mostre:
 Os números pares digitados;
 A soma dos números pares digitados;
 Os números ímpares digitados;
 A quantidade de números ímpares digitados;*/

int ehPar(int x);

int main(){
    int vetor[6], somaPares = 0, qtdImpares = 0;
    printf("Insira 6 valores inteiros: ");

    for(int i = 0; i < 6; i++){
        scanf("%d",&vetor[i]);
    }

    printf("Pares: \n");
    for(int i = 0; i < 6; i++){
        if(ehPar(vetor[i])) {
            somaPares += vetor[i];
            printf("A[%d]%d\n",i, vetor[i]);
        }
    }
    printf("Soma dos pares eh %d\n",somaPares);

    printf("Impares: \n");
    for(int i = 0; i < 6; i++){
        if(!ehPar(vetor[i])) {
            qtdImpares++;
            printf("A[%d]%d\n",i, vetor[i]);
        }
    }
    printf("Qtd de impares eh %d\n",qtdImpares);

    return 0;
}

int ehPar(int x){
    if(x%2==0) return 1;
    else return 0;
}