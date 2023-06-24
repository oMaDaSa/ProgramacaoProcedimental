#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Abra um arquivo texto, calcule e escreva o número de caracteres, o
número de linhas e o número de palavras neste arquivo. Escreva
também quantas vezes cada letra ocorre no arquivo (ignorando letras
com acento). Obs.: palavras são separadas por um ou mais caracteres
espaço, tabulação ou nova linha.*/

int main(){
    FILE *file;
    char fileName[100], searchWord[100], c, alfabeto[26];
    int countWord = 0, countLines = 1;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");
    if((file = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }

    for(int i = 0; i < 26; i++){
        alfabeto[i] = 0;
    }

    while(!feof(file)){
        (fscanf(file,"%s",searchWord));
        countWord++;
    }

    fseek(file,0,SEEK_SET);
    while(!feof(file)){
        c = getc(file);
        if((c >= 'a' && c <= 'z')){
            alfabeto[(int)(c-'a')]++;
        }
        else if((c >= 'A' && c <= 'Z')){
            alfabeto[(int)(c-'A')]++;
        }else if(c == '\n') countLines++;
    }
    
    
    printf("Palavras: %d\n", countWord);
    for(int i = 0; i < 26; i++){
        printf("%c = %d\n",'a'+i, alfabeto[i]);
    }
    printf("Linhas: %d\n", countLines);
    
    return 0;
}