#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
*/

int main(){
    int x;
    printf("Insira x: ");
    scanf("%d",&x);

    if(x%2==0) printf("x eh par\n");  
    else printf("x eh impar\n");
    
    system("pause");
    return 0;
}