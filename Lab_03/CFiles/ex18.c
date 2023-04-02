#include <stdio.h>
#include <stdlib.h>

/*
Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.
*/

int main(){
    double salario = 2000.00, aumento = 0.015;
    int ano = 1996;

    while(ano < 2023){
      ano++;
      
      aumento *= 2;
      salario += salario * aumento;
    }
    printf("Salario em %d eh de R$ %.2f\n", ano, salario);
    system("pause");
    return 0;
}