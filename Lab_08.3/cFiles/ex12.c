#include <stdio.h> 

/*Escreva uma função que receba um array de inteiros V e os endereços de
duas variáveis inteiras, min e max, e armazene nessas variáveis o valor
mínimo e máximo do array. Escreva também uma função main que use essa
função.*/

void maiorMenor(int *arr, int n, int *min, int *max);

int main(){
    int n = 5, arr[n], i, min, max;

    for(i = 0; i < n; i++){
        printf("Insira A[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    maiorMenor(arr, n, &min, &max);
    printf("O menor valor do array eh %d\n", min);
    printf("O maior valor do array eh %d\n", max);
    return 0;
}
    
void maiorMenor(int *arr, int n, int *min, int *max){
    *min = arr[0];
    *max = arr[0];

    for(int i = 0; i < n; i++){
        if(*min < arr[i]) *min = arr[i];
        if(*max > arr[i]) *max = arr[i];
    }
}