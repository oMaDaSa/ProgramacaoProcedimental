#include <stdio.h>
#include <math.h>

/*Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor.*/

int verificaPrimo(int x);

int main(){
    int vetor[10];
    printf("Insira 10 valores inteiros: ");

    for(int i = 0; i < 10; i++){
        scanf("%d",&vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(verificaPrimo(vetor[i]) == 1){
            printf("%d, na posicao A[%d] eh primo\n",vetor[i], i);
        }
    }

    return 0;
}

int verificaPrimo(int x){
    int raiz = sqrt(x);
    if(x <= 1){
        return 0;
    }else if(x == 2){
        return 1;
    }else if(x%2==0){
        return 0;
    }else{
        for(int i = 3; i < raiz; i+=2){
            if(x%i==0){
                return 0;
            }
        }
        return 1;
    }
}