#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas letras são vogais.*/

int main(){
    FILE *arq;
    char fileName[100];
    int qtdVogais = 0;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((arq = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); exit(1);
    }
    while(!feof(arq)){
        switch(getc(arq)){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                qtdVogais++;
                break;
            default:
                break;
        }
    }

    fclose(arq);
    printf("O arquivo %s tem %d vogais\n",fileName, qtdVogais);
    return 0;
}