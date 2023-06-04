#include <stdio.h> 

/*Escreva uma função que retorna o maior valor de um array de tamanho N.
Escreva um programa que leia N valores inteiros, imprima o array com ‘k’
elementos por linha, e o maior elemento. O valor de ‘k’ também deve ser
fornecido pelo usuário.*/

int maior(int *arr1, int n);

int main(){
    int n = 5, arr[n], k, i, j, pos;
    for(i = 0; i < n; i++){
        printf("Insira A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Insira quantos elementos por linha: ");
    scanf("%d", &k);

    for(i = 0, pos = 0; i < n/k+1; i++){
        for(j = 0; j < k; j++){
            if(pos < n){
                printf("%d ", arr[pos]);
                pos++;
            }
        }
        printf("\n");
    }
    printf("O maior valor eh %d\n", maior(arr, n));

    return 0;
}
    
int maior(int *arr, int n){
    int maior = arr[0];
    for(int i = 0; i < n; i++){
        if(maior < arr[i]) maior = arr[i];                                                                              
    }
    return maior;
}