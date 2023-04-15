#include <stdio.h>

/*Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a
saída para n = 6 seria:*/

void desenhaTriangulo(int n);

int main(){
    int num;

    printf("Insira a quantidade de linhas: ");
    scanf("%d",&num);
    desenhaTriangulo(num);
    return 0;
}

void desenhaTriangulo(int n){
    int base = (2*n)-1, whiteSpace = base-1, asterisco = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < base; j++){
            if(j<=whiteSpace/2 - asterisco || j>=whiteSpace/2 + asterisco){
                printf(" ");
            }else{
                printf("*");
            }
        }
        asterisco++;
        printf("\n");
    }
}