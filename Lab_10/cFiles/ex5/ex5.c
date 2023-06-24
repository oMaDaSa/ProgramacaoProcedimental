#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo texto e um
caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro
do arquivo*/

int main(){
    FILE *arq;
    char fileName[100], c;
    int conta = 0;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((arq = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); exit(1);
    }

    printf("Insira o caracter a buscar dentro do arquivo: ");
    c = getchar();
    
    while(!feof(arq)){
        if(getc(arq) == c) conta++;
    }

    fclose(arq);
    printf("O caracter %c aparece %d vezes no arquivo\n", c, conta);
    return 0;
}