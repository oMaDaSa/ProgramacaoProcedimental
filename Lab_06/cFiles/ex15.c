#include <stdio.h>
#include <string.h>

/*Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.*/

struct livros{
    char titulo[32], autor[17];
    int ano;
};
typedef struct livros livros;

int main(){
    const int k = 5; 
    livros livro[k];
    int i, j, posicao[k];
    char search[32];

    //leitura
    for(i = 0; i < k; i++){
        printf(" -Insira os dados do livro %d-\n", i+1);
        printf("Titulo: ");
        fflush(stdin);
        fgets(livro[i].titulo,32, stdin);

        printf("Autor: ");
        fflush(stdin);
        fgets(livro[i].autor,17, stdin);

        printf("Ano: ");
        scanf("%d", &livro[i].ano);

        //remove '\n'
        livro[i].titulo[strlen(livro[i].titulo)-1] = '\0';
        livro[i].autor[strlen(livro[i].autor)-1] = '\0';
    }

    printf("Insira o titulo do livro a procurar: ");
    fflush(stdin);
    fgets(search,32, stdin);
    search[strlen(search)-1] = '\0';

    for(i = 0, j = 0; i < k; i++){
        if(strcmp(livro[i].titulo, search) == 0){
            posicao[j] = i;
            j++;
        }
    }

    printf("\n%d livros encontrados:\n", j);
    for(i = 0; i < j; i++){
        printf("%d) autor: %s | ano: %d\n", i+1, livro[posicao[i]].titulo, livro[posicao[i]].ano);
    }
    

    return 0;
}