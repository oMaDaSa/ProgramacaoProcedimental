#include <stdio.h>
#include <stdlib.h>

/*
Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou
*/

int main(){
    int a, b, soma, resp, pontos = 0;

    for(int i=0; i<5; i++){
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        soma = a + b;
        printf("qual eh a soma de %d + %d?\n= ", a, b);
        scanf("%d", &resp);
        printf("A resposta eh %d, ", soma);
        if(resp == soma){
            printf("voce acertou\n");
            pontos++;
        }else{
            printf("voce errou...\n");
        }
    }

    printf("Voce acertou %d vezes\n", pontos);
    system("pause");
    return 0;
}