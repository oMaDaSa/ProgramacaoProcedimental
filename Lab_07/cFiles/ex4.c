#include <stdio.h>

/*
Escreva um programa que contenha duas variáveis inteiras. Leia essas
variáveis do teclado. Em seguida, compare seus endereços e exiba o
conteúdo do maior endereço
*/

int main(){
    int x, y;

    printf("Insira x: "); 
    scanf("%d", &x);
    printf("Insira y: "); 
    scanf("%d",&y);

    if(&x > &y) printf("%d eh conteudo do endereco de x\n", x);
    else printf("%d eh conteudo do endereco de y\n", y);
    return 0;
}