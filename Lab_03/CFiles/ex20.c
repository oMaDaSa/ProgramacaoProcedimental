#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões
*/

int main(){
    long long int soma = 2;
    int qtdDiv;
    float raiz;
    for(long int i = 3; i < 2000000; i += 2){
        qtdDiv = 0;
        raiz = sqrt(i);
        for(int j = 1; j <= raiz; j++){
            if(i%j==0){
                qtdDiv++;
            }
        } 
        if(qtdDiv==1){
                soma += i;
            }  
    }

    printf("A soma eh: %lld\n", soma);
    system("pause");
    return 0;
}