#include <stdio.h>

/*Faça um programa que receba uma palavra e a imprima de trás-para-frente*/

void reverseString(char origem[100], char destino[100]);

int main(){
    char normal[100], inverso[100];
    printf("Insira uma string: ");
    fgets(normal, 100, stdin);
    reverseString(normal, inverso);
    printf("%s", inverso);
    return 0;
}

void reverseString(char origem[100], char destino[100]){
    int tamanho, i;
    for(tamanho = 0; origem[tamanho]!='\0'; tamanho++);
    for(i = 0; i <= tamanho; i++){
        destino[i] = origem[tamanho - (i+1)];
    }
}