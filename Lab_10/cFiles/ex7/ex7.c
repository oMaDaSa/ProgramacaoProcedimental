#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo texto. Crie outro
arquivo texto contendo o texto do arquivo de entrada, mas com as
vogais substituídas por ‘*’.*/

int main(){
    FILE *arq, *arqCopy;
    char fileName[100], fileNameCopy[100];
    char c;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName)-1] = '\0';
    strcpy(fileNameCopy, fileName);
    strcat(fileName,".txt");
    strcat(fileNameCopy,"Copy.txt");

    if((arq = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }
    if((arqCopy = fopen(fileNameCopy,"w")) == NULL){ 
        printf("Nao foi possivel criar uma copia do arquivo\n"); 
        exit(1);
    }
    
    while(!feof(arq)){
        c = getc(arq);
        if(c == EOF) break;
        switch (c){
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
            putc('*', arqCopy);
            break;
        default:
            putc(c, arqCopy);
            break;
        }
    }

    fclose(arq);
    fclose(arqCopy);
    
    printf("Copia do arquivo com vogais substituidas criada com sucesso!\n");
    return 0;
}