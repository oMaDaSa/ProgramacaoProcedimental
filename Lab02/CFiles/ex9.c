#include <stdio.h>
#include <stdlib.h>

/*
Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”
*/

int main(){
    float salario, emprestimo;
    printf("Insira o salario: ");
    scanf("%f",&salario);
    printf("Insira o valor da prestacao do emprestimo: ");
    scanf("%f",&emprestimo);

    if(emprestimo > 0.2*salario) printf("Emprestimo nao concedido\n");
    else printf("Emprestimo concedido\n");

    system("pause");
    return 0;
}