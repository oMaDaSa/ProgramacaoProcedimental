#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
 o valor do salário atual do funcionário;
 o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento.
Salário Atual Reajuste (%) Tempo de Serviço Bônus
Até 500,00 25% Abaixo de 1 ano Sem bônus
Até 1000,00 20% De 1 a 3 anos 100,00
Até 1500,00 15% De 4 a 6 anos 200,00
Até 2000,00 10% De 7 a 10 anos 300,00
Acima de 2000,00 Sem reajuste Mais de 10 anos 500,00
*/

int main(){
    float salario, salarioNovo;
    int tempo;
    
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Digite o tempo de servico em anos: ");
    scanf("%d", &tempo);

    if(salario <= 500){
        salarioNovo = salario * 1.25;
    }else if(salario <= 1000){
        salarioNovo = salario * 1.20;
    }else if(salario <= 1500){
        salarioNovo = salario * 1.15;
    }else if(salario <= 2000){
        salarioNovo = salario * 1.10;
    }else{
        salarioNovo = salario;
    }

    if(tempo > 0 && tempo <= 3){
        salarioNovo += 100;
    }else if(tempo >= 4 && tempo <= 6){
        salarioNovo += 200;
    }else if(tempo >= 7 && tempo <= 10){
        salarioNovo += 300;
    }else if(tempo > 10){
        salarioNovo += 500;
    }
    
    printf("Salario novo: R$%.2f\n", salarioNovo);
    system("pause");
    return 0;
}