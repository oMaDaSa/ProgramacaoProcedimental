#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que receba o nome de um arquivo de entrada e outro
de saída. O arquivo de entrada contém em cada linha o nome de uma
cidade (ocupando 40 caracteres) e o seu número de habitantes. O
programa deverá ler o arquivo de entrada e gerar um arquivo de saída
onde aparece o nome da cidade mais populosa seguida pelo seu número
de habitantes.*/

int main(){
    FILE *arq, *mostPopulous;
    char fileName[100], cityName[40], name[40], string[100];
    int biggestPopulation, population, i;

    printf("Digite o nome do arquivo contendo as informacoes das cidades: ");
    fgets(fileName, 100, stdin);

    fileName[strlen(fileName)-1] = '\0';
    strcat(fileName,".txt");

    if((arq = fopen(fileName,"r")) == NULL){ 
        printf("Arquivo nao existe\n"); 
        exit(1);
    }
    if((mostPopulous = fopen("mostPopulous.txt","w")) == NULL){ 
        printf("Nao foi possivel criar o arquivo da cidade mais populosa\n"); 
        exit(1);
    }
    
    for(i = 0; !feof(arq); i++){
        if(i == 0){
            fgets(string, 100, arq);
            printf("%s\n", string);
            strcpy(name, strtok(string, ","));
            population = atoi(strtok(NULL, ","));
            biggestPopulation = population;
            strcpy(cityName, name);
        }else{
            fgets(string, 100, arq);
            strcpy(name, strtok(string, ","));
            population = atoi(strtok(NULL, ","));
            if(population > biggestPopulation){
                biggestPopulation = population;
                strcpy(cityName, name);
            }
        }
    }

    fprintf(mostPopulous, "%s, %d", cityName, biggestPopulation);

    fclose(arq);
    fclose(mostPopulous);
    
    printf("Cidade mais populosa salva em mostPopulous.txt!\n");
    return 0;
}