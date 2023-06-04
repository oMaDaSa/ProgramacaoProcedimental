#include <stdio.h> 

/* Implemente uma função que receba como parâmetro um array de números
reais de tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo: int negativos(float *vet, int
N);*/

int negativos(float *vet, int N);

int main(){
    float arr[10];
    int i = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %do elemento do array: ", i+1);
        scanf("%f", &arr[i]);
    }

    printf("O array possui %d elementos negativos\n",negativos(arr, 10));
    return 0;
}

int negativos(float *vet, int N){
    int i, negativos = 0;

    for(i = 0; i < N; i++){
        if(vet[i] < 0) negativos++;
    }

    return negativos;
}