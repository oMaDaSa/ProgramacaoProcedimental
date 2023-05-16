#include <stdio.h>
#include <string.h>

/*.Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a média mínima para a
aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados
do vetor de reprovados.*/

struct alunos{
    char nome[100], matricula[10];
    float media;
};
typedef struct alunos alunos;

int main(){
    const int k = 3; //qtd de alunos
    int i, j = 0, l = 0;
    alunos aluno[k], aprovados[k], reprovados[k];
    
    //leitura
    for(i = 0; i < k; i++){
        printf(" -Insira os dados do aluno %d-\n", i+1);
        printf("Nome: ");
        fflush(stdin);
        fgets(aluno[i].nome,100, stdin);
        printf("Matricula: ");
        fflush(stdin);
        fgets(aluno[i].matricula, 12, stdin);
        printf("Media: ");
        scanf("%f", &aluno[i].media);

        aluno[i].nome[strlen(aluno[i].nome)-1] = '\0';
        aluno[i].matricula[strlen(aluno[i].matricula)-1] = '\0';
    }

    //reprovados ou aprovados
    for(i = 0; i < k; i++){
        if(aluno[i].media < 5.0){
            reprovados[j] = aluno[i];
            j++;
        }
        else{
            aprovados[l] = aluno[i];
            l++;
        }
    }

    printf("\n - Aprovados -\n");
    for(i = 0; i < l; i++) {
        printf("%s, matricula: %s, media: %.2f\n", aprovados[i].nome, aprovados[i].matricula, aprovados[i].media);
    }
    printf("\n - Reprovados -\n");
    for(i = 0; i < j; i++) {
        printf("%s, matricula: %s, media: %.2f\n", reprovados[i].nome, reprovados[i].matricula, reprovados[i].media);
    }
    

    return 0;
}