#include <stdio.h>

/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

int posMaior(int a[5]);
int posMenor(int a[5]);

int main(){
    int vetor[6], maior, menor;

    printf("Insira 5 valores inteiros: ");
    for(int i = 0; i < 5; i++){
        scanf("%d",&vetor[i]);
    }
    
    maior = posMaior(vetor);
    menor = posMenor(vetor);

    printf("O maior valor esta na %da posicao (A[%d])\n", maior + 1, maior);
    printf("O menor valor esta na %da posicao (A[%d])\n", menor + 1, menor);

    return 0;
}

int posMaior(int a[5]){
    int maior = a[0], pos = 0;
    for(int i = 0; i < 5; i++){
        if(a[i] > maior){
            maior = a[i];
            pos = i;
        }
    }
    return pos;
}
int posMenor(int a[5]){
    int menor = a[0], pos = 0;
    for(int i = 0; i < 5; i++){
        if(a[i] < menor){
            menor = a[i];
            pos = i;
        }
    }
    return pos;
}