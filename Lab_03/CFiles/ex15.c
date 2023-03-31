#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero.
*/

int main(){
    float x;

    do{
        printf("Insira um valor: ");
        scanf("%f",&x);
        if(x > 0){
            printf("quadrado de %.2f = %.2f\n", x, pow(x,2));
            printf("cubo de %.2f = %.2f\n", x, pow(x,2));
            printf("raiz de %.2f = %.2f\n\n", x, sqrt(x));
        }else printf("Programa encerrado\n");
    }while(x > 0);

    system("pause");
    return 0;
}