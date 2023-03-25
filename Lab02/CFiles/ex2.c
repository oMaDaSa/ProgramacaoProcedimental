#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
*/

int main(){
    float x;
    printf("Insira x: ");
    scanf("%f",&x);

    if(x>=0) printf("A raiz de x eh  %.2f\n",sqrt(x));
    else printf("Numero invalido\n");

    system("pause");
    return 0;
}