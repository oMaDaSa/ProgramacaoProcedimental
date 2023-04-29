#include <stdio.h>

/* Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.*/

void converteMaiusculo(char *stringOrigem, char *stringDestino);

int main(){
    char stringInserida[100], stringConvertida[100];
    printf("Escreva: ");
    fgets(stringInserida, 100, stdin);
    converteMaiusculo(stringInserida, stringConvertida);
    printf("Convertido: %s", stringConvertida);
    return 0;
}

void converteMaiusculo(char *stringOrigem, char *stringDestino){
    for(int i = 0; stringOrigem[i] != '\0'; i++){
        if(stringOrigem[i] >= 97 && stringOrigem[i] <= 122){
            stringDestino[i] = stringOrigem[i] - 32;
        }else{
            stringDestino[i] = stringOrigem[i];
        }
    }
}