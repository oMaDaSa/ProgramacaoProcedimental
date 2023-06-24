#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba do usuário um arquivo texto e mostre na
tela quantas vezes cada letra do alfabeto aparece dentro do arquivo.*/

int main(){
    FILE *arq;
    char fileName[100], alfabeto[26];
    int c;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((arq = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }

    for(int i = 0; i < 26; i++){
        alfabeto[i] = 0;
    }
    
    while(!feof(arq)){
        c = getc(arq);
        if((c >= 'a' && c <= 'z')){
            alfabeto[(int)(c-'a')]++;
        }
        else if( (c >= 'A' && c <= 'Z')){
            alfabeto[(int)(c-'A')]++;
        }
    }

    fclose(arq);

    for(int i = 0; i < 26; i++){
        printf("%c = %d\n",'a'+i, alfabeto[i]);
    }
    
    return 0;
}