#include <stdio.h>

/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação*/

struct alunos
{
    char nome[100], matricula[20];
    float nota1, nota2, nota3;
};

typedef struct alunos alunos;

alunos maiorNotaP1(alunos aluno[5]);
alunos maiorMediaGeral(alunos aluno[5]);
alunos menorMediaGeral(alunos aluno[5]);

int main(){
    alunos aluno[5];
    alunos maiorNota, maiorMedia, menorMedia;
    for(int i = 0; i < 5; i++){
        printf(" -Aluno %d-\n", i+1);
        printf("Insira o nome do aluno: ");
        fflush(stdin);
        fgets(aluno[i].nome, 100, stdin);
        printf("Insira a matricula do aluno: ");
        fflush(stdin);
        fgets(aluno[i].matricula, 20, stdin);
        printf("Insira a nota da prova 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Insira a nota da prova 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("Insira a nota da prova 3: ");
        scanf("%f", &aluno[i].nota3);
    } 

    maiorNota = maiorNotaP1(aluno);
    maiorMedia = maiorMediaGeral(aluno);
    menorMedia = menorMediaGeral(aluno);

    printf("%stem a maior nota da p1 (%.1f)\n", maiorNota.nome, maiorNota.nota1);
    printf("%stem a maior media geral (%.1f)\n", maiorMedia.nome, (maiorMedia.nota1 + maiorMedia.nota2 + maiorMedia.nota3)/3);
    printf("%stem a menor media geral (%.1f)\n", menorMedia.nome, (menorMedia.nota1 +menorMedia.nota2 + menorMedia.nota3)/3);

    for(int i = 0; i < 5; i++){
        float media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
        if(media >= 6){
            printf("%spassou com media: %.1f\n", aluno[i].nome, media);
        }else printf("%snao passou com media: %.1f\n", aluno[i].nome, media);
    }

    return 0;
}

alunos maiorNotaP1(alunos aluno[5]){
    int x = 0;
    float maiorNota = aluno[0].nota1;
    for(int i = 1; i < 5; i++){
        if(aluno[i].nota1 > maiorNota){
            maiorNota = aluno[i].nota1;
            x = i;
        }
    }
    return aluno[x];
}

alunos maiorMediaGeral(alunos aluno[5]){
    int x = 0;
    float maiorMedia = (aluno[0].nota1 + aluno[0].nota2 + aluno[0].nota3)/3;
    for(int i = 1; i < 5; i++){
        if(((aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3) > maiorMedia){
            maiorMedia = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
            x = i;
        }
    }
    return aluno[x];
}

alunos menorMediaGeral(alunos aluno[2]){
    int x = 0;
    float menorMedia = (aluno[0].nota1 + aluno[0].nota2 + aluno[0].nota3)/3;
    for(int i = 1; i < 5; i++){
        if(((aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3) < menorMedia){
            menorMedia = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3;
            x = i;
        }
    }
    return aluno[x];
}