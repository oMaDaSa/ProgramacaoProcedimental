#include <stdio.h>
#include <string.h>

/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
e exibidos na tela.*/

struct funcionario{
    char nome[100], sexo, cpf[12], cargo[30];
    int idade, diaNasc, mesNasc, anoNasc, codSetor;
    float salario;
};
typedef struct funcionario funcionario;

int main(){
    funcionario funcionario;

    printf("Insira os dados do funcionario:\n");
    printf("Nome: ");
    fflush(stdin);
    fgets(funcionario.nome,100,stdin);
    printf("Idade: ");
    scanf("%d",&funcionario.idade);
    printf("Sexo (M/F): ");
    fflush(stdin);
    scanf("%c",&funcionario.sexo);
    printf("CPF: ");
    fflush(stdin);
    fgets(funcionario.cpf,12,stdin);
    printf("Data de Nascimento (dd/mm/aa): ");
    scanf("%d/%d/%d", &funcionario.diaNasc, &funcionario.mesNasc, &funcionario.anoNasc);
    printf("Codigo do Setor: ");
    scanf("%d",&funcionario.codSetor);
    printf("Cargo: ");
    fflush(stdin);
    fgets(funcionario.cargo,20,stdin);
    printf("Salario: ");
    scanf("%f",&funcionario.salario);

    funcionario.nome[strlen(funcionario.nome)-1] = '\0';
    funcionario.cpf[strlen(funcionario.cpf)-1] = '\0';
    funcionario.cargo[strlen(funcionario.cargo)-1] = '\0';

    printf(" - %s, %d anos, %s -\n", funcionario.nome, funcionario.idade, funcionario.cargo);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s", funcionario.cpf);
    printf("Codigo do Setor: %d\n", funcionario.codSetor);
    printf("Salario: R$%.2f\n", funcionario.salario);
    printf("Data de Nascimento: %d/%d/%d\n", funcionario.diaNasc, funcionario.mesNasc, funcionario.anoNasc);

    return 0;
}