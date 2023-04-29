#include <stdio.h>

/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.*/

void printVetorInverso(int a[6]);

int main(){
    int vetor[6];

    printf("Insira 6 valores inteiros: ");
    for(int i = 0; i < 6; i++){
        scanf("%d",&vetor[i]);
    }
    
    printVetorInverso(vetor);
    return 0;
}

void printVetorInverso(int a[6]){
    for(int i = 5; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}