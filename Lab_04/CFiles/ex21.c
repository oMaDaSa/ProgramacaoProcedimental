#include <stdio.h>

/*Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5):*/

void excalamationPointTriangle(int n);

int main(){
    int num;

    printf("Insira a quantidade de linhas: ");
    scanf("%d",&num);
    excalamationPointTriangle(num);
    return 0;
}

void excalamationPointTriangle(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            printf("!");
    }
    printf("\n");
    }
}