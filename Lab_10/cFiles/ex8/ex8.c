#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Faça um programa que leia o conteúdo de um arquivo e crie um arquivo
com o mesmo conteúdo, mas com todas as letras minúsculas
convertidas para maiúsculas. Os nomes dos arquivos serão fornecidos,
via teclado, pelo usuário. A função que converte maiúscula para
minúscula é o toupper(). Ela é aplicada em cada caractere da string.*/

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
        if(c >= 'a' && c <= 'z') putc(toupper(c), arqCopy);
        else putc(c, arqCopy);
    }

    fclose(arq);
    fclose(arqCopy);
    
    printf("Copia do arquivo com letras maiusculas criada com sucesso!\n");
    return 0;
}