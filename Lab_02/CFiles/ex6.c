#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.
*/

int main(){
    int x, y, dif;

    printf("Insira x: ");
    scanf("%d",&x);
    printf("Insira y: ");
    scanf("%d",&y);

    if(x>y) {
        printf("O maior numero eh: %d\n",x);
        dif = x-y;
    }
    else if(x<y){
        printf("O maior numero eh: %d\n",y);
        dif = y-x;
    } 
    else{
        printf("Os numeros sao iguais\n");
        dif = 0;
    } 

    printf("A diferenca eh de %d\n", dif);
    
    system("pause");
    return 0;
}