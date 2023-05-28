#include <stdio.h>

/*Escreva um programa que receba um array de inteiros com 10 elementos
digitados pelo usuário e encontre o menor (min) e o maior (max) elemento
desse array. Utilize ponteiros tanto para acessar o array quanto para acessar
as variáveis min e max, ou seja, são necessários pelo menos 3 ponteiros.*/

int main(){
    int array[10], *p_array = &array[0], *p_menor = &array[0], *p_maior = &array[0], i;
    
    for(i = 0; i < 10; i++){
        printf("Insira o valor %d: ", i);
        scanf("%d", &array[i]);
        if(*(p_array+i) < *(p_menor)){
            p_menor = p_array+i;
        }
        if(*(p_array+i) > *(p_maior)){
            p_maior = p_array+i;
        }
    }

    printf("O menor valor do array eh %d\n", *(p_menor));
    printf("O maior valor do array eh %d\n", *(p_maior));

    return 0;
}