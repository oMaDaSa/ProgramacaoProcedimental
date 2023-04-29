#include <stdio.h>

/*Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

void removeSpaces(char *stringOrigem, char *stringDestino);

int main(){
    char stringInserida[100], stringConvertida[100];
    printf("Escreva: ");
    fgets(stringInserida, 100, stdin);
    removeSpaces(stringInserida, stringConvertida);
    printf("Convertido: %s", stringConvertida);
    return 0;
}

void removeSpaces(char *stringOrigem, char *stringDestino){
    int j = 0, i;
    for(i = 0; stringOrigem[i] != '\0'; i++){
        if(stringOrigem[i] != ' '){
            stringDestino[j] = stringOrigem[i];
            j++;
        }
    }
    stringDestino[j+1] = '\0';
}
 
