#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Dado um arquivo contendo um conjunto de nome e data de nascimento
(DD MM AAAA), isto é, 3 inteiros em sequência), faça um programa que
leia o nome do arquivo e a data de hoje e construa outro arquivo
contendo o nome e a idade de cada pessoa do primeiro arquivo.*/

int verificaData(int dd, int mm, int aa);

int main(){
    FILE *fileDatas, *fileIdades;
    char fileName[100], nome[100];
    int diaAtual, mesAtual, anoAtual;
    int diaFile, mesFile, anoFile;
    int idade;

    printf("Digite o nome do arquivo com os nomes e datas: ");
    fgets(fileName, 100, stdin);
    setbuf(stdin, NULL);
    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");
    if((fileDatas = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }

    if((fileIdades = fopen("idades.txt","a")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }

    printf("Insira a data de hoje (dd/mm/dddd): ");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);
    if(!verificaData(diaAtual, mesAtual, anoAtual)){
        printf("Data atual invalida\n");
        exit(1);
    }

    while(!feof(fileDatas)){
        idade = 0;
        fscanf(fileDatas, "%[^,], %2d/%2d/%4d\n", nome, &diaFile, &mesFile, &anoFile);
        if(anoFile > anoAtual || (anoFile == anoAtual && mesFile > mesAtual) || (anoFile == anoAtual && mesFile == mesAtual && diaFile > diaAtual) || !verificaData(diaFile, mesFile, anoAtual)){
            printf("Erro\n");
            printf("%s com data invalida\n",nome);
            exit(1);
        }
        else if(anoAtual > anoFile){
            idade += anoAtual - anoFile - 1;
            anoFile += idade + 1;
        }
        if(mesAtual > mesFile && anoFile == anoAtual && idade != 0){
            idade++;
        }else if(mesAtual == mesFile && anoFile == anoAtual && idade != 0){
            if(diaAtual >= diaFile){
                idade++;
            }
        }
        fprintf(fileIdades, "%s, %d\n",nome, idade);
    }
    
    fclose(fileIdades);
    fclose(fileDatas);
    printf("Arquivo de idades criado com sucesso!\n");
    return 0;
}

int verificaData(int dd, int mm, int aa){
    int bissexto = 0;

    if(aa%400 == 0 || (aa%4 == 0 && aa%100 != 0)) bissexto = 1;
    if(mm < 1 || mm > 12) return 0;
    else if(dd < 1 || dd > 31) return 0;
    else if(mm == 2 && bissexto == 1 && dd > 29) return 0;
    else if(mm == 2 && bissexto == 0 && dd > 28) return 0;
    else if((mm == 4 || mm == 6 || mm == 9 || mm == 11 ) && dd > 30) return 0;

    return 1;
}