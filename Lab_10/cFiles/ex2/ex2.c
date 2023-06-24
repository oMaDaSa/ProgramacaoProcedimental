#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas linhas esse arquivo possui.*/

int main(){
    FILE *arq;
    char fileName[100], contaLinhas = 1;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((arq = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); exit(1);
    }
    while(!feof(arq)){
        fseek(arq, 1, SEEK_CUR);
        if(getc(arq) == '\n') contaLinhas++;
    }
    
    printf("O arquivo tem %d linhas\n", contaLinhas);
    
    return 0;
}