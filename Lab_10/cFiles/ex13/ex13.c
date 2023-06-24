#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/*Faça um programa que permita que o usuário entre com diversos nomes
e telefone para cadastro, e crie um arquivo com essas informações, uma
por linha. O usuário finaliza a entrada com ‘0’ para o telefone..*/

typedef struct data{
    char name[60], phone[12];
}data;

int main(){
    FILE *file;
    data data;

    if((file = fopen("file.txt","a")) == NULL){ 
        printf("Arquivo nao pode ser criado\n"); 
        exit(1);
    }

    while(1){
        printf("Insira o nome: ");
        setbuf(stdin,NULL);
        fgets(data.name, 60, stdin);
        data.name[strlen(data.name)-1] = '\0';

        printf("Insira o telefone (insira '0' para terminar): ");
        setbuf(stdin,NULL);
        fgets(data.phone, 60, stdin);
        data.phone[strlen(data.phone)-1] = '\0';

        if(strcmp(data.phone, "0\0") == 0) break;
        else{
            fprintf(file, "%s, ",data.name);
            fprintf(file, "%s\n",data.phone);
        }
    }

    fclose(file);

    return 0;
}