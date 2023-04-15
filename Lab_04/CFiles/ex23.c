#include <stdio.h>

/*Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:*/

void asteriscoTriangulo(int n);

int main(){
    int num;

    printf("Insira a quantidade de linhas: ");
    scanf("%d",&num);
    asteriscoTriangulo(num);
    return 0;
}

void asteriscoTriangulo(int n){
    int h = (2*n)-1, count = 0;
    for(int i=1; i<h+1; i++){
        if(i<=n){
            for(int j=1; j<=i; j++){
                printf("*");
            }
        }else{
            count++;
            for(int j=n-count; j>0; j--){
                printf("*");
        }
    }
    printf("\n");
    }
}