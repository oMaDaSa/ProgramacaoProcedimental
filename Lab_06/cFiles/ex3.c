#include <stdio.h>

/*Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.*/

struct aluno{
    char nome[100], curso[50];
    long int matricula;
};
typedef struct aluno aluno;

int main(){
    aluno alunos[5];

    //insere os 5 alunos
    for(int i=0; i<5; i++){
        printf("Aluno %d:\n",i+1);
        printf(" - Insira o nome: ");
        fflush(stdin);
        fgets(alunos[i].nome, 100, stdin);
        printf(" - Insira o curso: ");
        fflush(stdin);
        fgets(alunos[i].curso, 50, stdin);
        printf(" - Insira a matricula: ");
        fflush(stdin);
        scanf("%ld", &alunos[i].matricula);
        printf("\n");
    }

    printf("\n");
    //printa os 5 alunos
    for(int i=0; i<5; i++){
        printf("Aluno %ld:\n",alunos[i].matricula);
        printf(" - nome: %s", alunos[i].nome);
        printf(" - curso: %s", alunos[i].curso);
        printf("\n");
    }
    return 0;
}