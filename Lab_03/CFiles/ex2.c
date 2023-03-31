#include <stdio.h>

/*
Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while
*/

int main(){
    int x;
    x = 1;

    printf("\nFor: \n");
    for(; x<=100; x++){
        printf("%d ",x);
    }

    x = 1;
    printf("\nWhile: \n");

    while(x<=100){
        printf("%d ",x);
        x++;
    }

    x = 1;
    printf("\nDo-while: \n");
    do{
        printf("%d ",x);
        x++;
    }while(x<=100);

  return 0;
}