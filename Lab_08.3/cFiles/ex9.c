#include<stdio.h> 

/*Escreva um programa que declare um array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada
posição do array usando o ponteiro (use *).*/

int main(){
    int arr[10];
    int *p_arr = arr;
    
    p_arr = arr;
    while(p_arr < arr + 10){
        printf("Insira um valor do array: ");
        scanf("%d", p_arr);
        (*p_arr)++;
        p_arr++;
    }

    p_arr = arr;
    while(p_arr < arr + 10){
        printf("%d\n", *p_arr);
        p_arr++;
    }

    return 0;
}