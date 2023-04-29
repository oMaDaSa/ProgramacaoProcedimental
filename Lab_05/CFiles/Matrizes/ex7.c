#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de
modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a
cartela gerada.*/

int searchArray(int x, int Vet[25], int count);
void printCartela(int array[5][5]);

int main(){
    int cartela[5][5], numerosInvalidos[25], count = 0;
    srand(time(NULL));

    for(int i = 0; i < 25; i++){
        for(int j = 0; j < 25; j++){
            numerosInvalidos[i] = -1;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            do{
                cartela[i][j] = rand() % 99;
                numerosInvalidos[count] = cartela[i][j];
            }while(searchArray(cartela[i][j], numerosInvalidos, count) == 0);
            count++;
        }
    }

    printf("B  I  N  G  O\n");
    printCartela(cartela);

    return 0;
}

int searchArray(int x, int vet[25], int count){
    for(int i = 0; i < count; i++){
        if(x == vet[i]){
            return 0;
        }
    }
    return 1;
}

void printCartela(int array[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(array[i][j] < 10){
                printf("0%d ", array[i][j]);
            }else{
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}