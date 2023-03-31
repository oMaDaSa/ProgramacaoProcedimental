#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.
*/

int main(){
    int soma = 0, n;

    for(int i=1; i <= 1000; i++){
        if(i%3==0 || i%5==0){
            soma += i;
        }
    }

    printf("soma: %d\n",soma); 
    system("pause");
    return 0;
}