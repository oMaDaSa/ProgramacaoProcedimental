#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são 
números informados pelo usuário.
*/

int main(){
    int qtdPrimos = 0, a, b, qtdDiv;
    float raiz;

    printf("Insira os valores a e b; ");
    scanf("%d %d", &a, &b);

    for(long int i = a; i <= b; i++){
        qtdDiv = 0;
        raiz = sqrt(i);
        for(int j = 1; j <= raiz; j++){
            if(i%j==0){
                qtdDiv++;
            }
        } 
        if(qtdDiv==1){
                qtdPrimos++;
            }  
    }

    printf("A quantidade de primos entre %d e %d eh: %d\n", a, b, qtdPrimos);
    system("pause");
    return 0;
}