#include <stdio.h>

/*Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i
a posição do elemento no vetor. Em seguida imprima o vetor na tela..*/

int main(){
    int vetor[50];
    printf("%d\n\n", (1+5*1)%(1+1));
    
    for(int i = 0; i < 50; i++){
        vetor[i] = (i+5*i)%(i+1);
        printf("A[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}