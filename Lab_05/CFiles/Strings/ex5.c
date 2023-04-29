#include <stdio.h>

/*Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

void converteMinusculo(char *stringOrigem, char *stringDestino);

int main(){
    char stringInserida[100], stringConvertida[100];
    printf("Escreva: ");
    fgets(stringInserida, 100, stdin);
    converteMinusculo(stringInserida, stringConvertida);
    printf("Convertido: %s", stringConvertida);
    return 0;
}

void converteMinusculo(char *stringOrigem, char *stringDestino){
    for(int i = 0; stringOrigem[i] != '\0'; i++){
        if(stringOrigem[i] >= 65 && stringOrigem[i] <= 95){
            stringDestino[i] = stringOrigem[i] + 32;
        }else{
            stringDestino[i] = stringOrigem[i];
        }
    }
}