#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número N e:
a) Crie dinamicamente e leia um vetor de inteiro de N posições;
b) Leia um número inteiro X e conte e mostre os múltiplos desse número
que existem no vetor.*/

int main(){
    int n, *vet, x;
    printf("Insira n: ");
    scanf("%d", &n);
    vet = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Insira vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Insira x: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
        if(vet[i]%x == 0){
            printf("%d eh multiplo de %d\n", vet[i], x);
        }
    }

    return 0;
}