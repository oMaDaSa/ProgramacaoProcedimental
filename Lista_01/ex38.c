#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.
*/

int main()
{
    float salInicial, salFinal;
    float aumento = 0.25;
    printf("Digite o salario em reais: ");
    scanf("%f", &salInicial);
    salFinal = salInicial + (salInicial * aumento);  
    printf("Salário final = %.2f reais \n",salFinal);
    system("pause");
    return 0;
}