#include <stdio.h>

/*Elabore um programa que dado um array e um valor do mesmo tipo do
array, preencha os elementos de array com esse valor. Não utilize índices
para percorrer o array, apenas aritmética de ponteiros.*/

int main(){
    int array[10], *p = &array[0], valor;
    printf("Insira um valor para preencher o array: ");
    scanf("%d", &valor);
    for(int i = 0; i < 10; i++){
        *(p+i) =  valor;
    }

    return 0;
}