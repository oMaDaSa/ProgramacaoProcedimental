#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Faça um programa que receba dois arquivos do usuário, e crie um
terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo
do primeiro seguido do conteúdo do segundo).*/

int main(){
    FILE *arq1, *arq2, *arqMerge;
    char fileName1[100], fileName2[100];
    char c;

    printf("Digite o nome do primeiro arquivo: ");
    fgets(fileName1, 100, stdin);
    printf("Digite o nome do segundo arquivo: ");
    fgets(fileName2, 100, stdin);

    fileName1[strlen(fileName1)-1] = '\0';
    fileName2[strlen(fileName2)-1] = '\0';

    strcat(fileName1,".txt");
    strcat(fileName2,".txt");

    if((arq1 = fopen(fileName1,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }
    if((arq2 = fopen(fileName2,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }
    if((arqMerge = fopen("merge.txt","w")) == NULL){ 
        printf("Nao foi possivel criar o arquivo da juncao\n"); 
        exit(1);
    }
    
    while(!feof(arq1)){
        c = getc(arq1);
        if(c == EOF) break;
        else putc(c, arqMerge);
    }

    putc('\n', arqMerge);

    while(!feof(arq2)){
        c = getc(arq2);
        if(c == EOF) break;
        else putc(c, arqMerge);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arqMerge);
    
    printf("Juncao dos arquivos feita com sucesso no arquivo merge.txt!\n");
    return 0;
}