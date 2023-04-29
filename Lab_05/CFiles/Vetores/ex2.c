#include <stdio.h>

/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

float somaPosicoes(int a[8], int pos1, int pos2);

int main(){
    float vetor[8];
    int pos1, pos2;

    for(int i = 0; i < 8; i++){
        printf("Insira o valor da posicao %d: ", i);
        scanf("%d",&vetor[i]);
    }

    printf("Digite as posicoes a serem somadas: ");
    scanf("%d %d",&pos1, &pos2);

    printf("A soma dos valores em A[%d] + A[%d] eh %.2f", pos1, pos2, somaPosicoes(vetor, pos1, pos2));
    return 0;
}

float somaPosicoes(int a[8], int pos1, int pos2){
    int soma = a[pos1] + a[pos2];
    return soma;
}