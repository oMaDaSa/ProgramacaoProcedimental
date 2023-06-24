#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*.Faça um programa no qual o usuário informa o nome do arquivo e uma
palavra, e retorne o número de vezes que aquela palavra aparece no
arquivo.*/

int main(){
    FILE *file;
    char fileName[100], word[100], searchWord[100];
    int countWord = 0;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");
    if((file = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }

    printf("Insira a palavra a buscar no arquivo: ");
    setbuf(stdin, NULL);
    fgets(word, 100, stdin);
    word[strlen(word)-1] = '\0';

    while(!feof(file)){
        (fscanf(file,"%s",searchWord));
        if((strcmp(searchWord, word)) == 0){
            countWord++;
        }
    }
    
    printf("\"%s\" aparece %d vezes no arquivo\n", word, countWord);
    
    return 0;
}