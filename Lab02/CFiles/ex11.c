#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”
*/

int main(){
    int x, soma = 0;
    scanf("%d",&x);
    if(x>0){
        while(x>0){
            soma += x % 10;
            x /= 10;
        }
        printf("Soma de todos os seus algarismos. %d\n",soma);
    }else printf("Numero invalido\n");

    
    system("pause");
    return 0;
}