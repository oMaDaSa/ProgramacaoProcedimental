#include <stdio.h>
#include <string.h>

/*Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. 
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’*/

void concat(char *stringA, char *stringB, int n);

int main(){
    char stringA[100], stringB[100];
    int n;

    printf("Insira a 1a string: ");
    fgets(stringA, 100, stdin);
    printf("Insira a 2a string: ");
    fgets(stringB, 100, stdin);
    printf("Quantos caracteres serao concatenados: ");
    scanf("%d", &n);

    concat(stringA, stringB, n);
    printf("%s", stringA);
    
    return 0;
}

void concat(char *stringA, char *stringB, int n){
    int tamanhoA = strlen(stringA)-1, i;
    for(i = 0; i < n; i++){
        stringA[tamanhoA + i] = stringB[i];
    }
    stringA[tamanhoA + i] = '\0';
}