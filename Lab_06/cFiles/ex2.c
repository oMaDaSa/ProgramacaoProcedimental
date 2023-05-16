#include <stdio.h>

/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.
*/

struct endereco{
    int numero;
    char bairro[50], rua[50], estado[3], cidade[50];
};

typedef struct endereco endereco;

struct dadosUsuario{
    endereco endereco;
    char nome[100];
    int idade;
};

typedef struct dadosUsuario dadosUsuario;

int main(){
    dadosUsuario dadosUsuario;
    endereco endereco;

    //preenche endereco:
    printf("Insira a sigla do estado: ");
    fflush(stdin);
    fgets(endereco.estado, 3, stdin);
    printf("Insira a cidade: ");
    fflush(stdin);
    fgets(endereco.cidade, 50, stdin);
    fflush(stdin);
    printf("Insira o bairro: ");
    fflush(stdin);
    fgets(endereco.bairro, 50, stdin);
    printf("Insira a rua: ");
    fflush(stdin);
    fgets(endereco.rua, 50, stdin);
    printf("Insira o numero: ");
    fflush(stdin);
    scanf("%d", &endereco.numero);

    //preenche dados do usuario
    printf("Insira seu nome:");
    fflush(stdin);
    fgets(dadosUsuario.nome, 100, stdin);
    printf("Insira sua idade:");
    scanf("%d", &dadosUsuario.idade);
    dadosUsuario.endereco = endereco;
   
    return 0;
}