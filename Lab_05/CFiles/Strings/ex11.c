#include <stdio.h>

/*Escreva um programa que recebe uma string S e inteiros não-negativos i e j e imprima o 
segmento S[i..j].*/

void printRange(char *s, int i, int j);

int main(){
    char string[100];
    int i, j;
    fgets(string, 100, stdin);
    printf("Insira o intervalo a ser printado [i-j]:");
    scanf("%d %d", &i, &j);
    printRange(string, i, j);
    return 0;
}

void printRange(char *s, int i, int j){
    if(i < 0 || j < 0){
        printf("Invetervalo invalido\n");
        return;
    }
    for(int k = i; k < j; k++){
        printf("%c", s[k]);
    }
    printf("\n");
}