#include <stdio.h>
#include <string.h>

/*Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até
10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor de
estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias finais
(use uma média ponderada: Nota1 com peso = 1.0 e Nota2 com peso = 2.0).*/

struct alunos{
    char matricula[10], nome[100], codigoDisciplina[5];
    float nota1, nota2, media;
};
typedef struct alunos alunos;

int main(){
    alunos aluno[10];
    int i;

    for(i = 0; i < 10; i++){
        printf(" - Aluno %d -:\n",i+1);
        printf("Nome: ");
        fflush(stdin);
        fgets(aluno[i].nome,100,stdin);
        printf("Matricula: ");
        fflush(stdin);
        fgets(aluno[i].matricula,20,stdin);
        printf("Codigo da disciplina: ");
        fflush(stdin);
        fgets(aluno[i].codigoDisciplina,5,stdin);
        printf("Nota 1: ");
        scanf("%f",&aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f",&aluno[i].nota2);
        printf("\n");

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2*2)/3;
        aluno[i].nome[strlen(aluno[i].nome)-1] = '\0';
    }

    printf(" - Medias - \n");
    for(i = 0; i < 10; i++){
        printf(" %s %.2f\n", aluno[i].nome, aluno[i].media);
    }

    return 0;
}