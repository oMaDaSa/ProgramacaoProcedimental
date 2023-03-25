#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.
*/

int main(){
    float x, log;
    scanf("%f",&x);
    if(x>=0){
        log = log10(x);
        printf("Logaritimo de %.2f eh %.2f\n",x, log);
    }else printf("Numero invalido\n");

    
    system("pause");
    return 0;
}