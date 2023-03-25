#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto),
dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa.
*/

int main(){
    int dd, mm, aa;
    bool val = true, bissexto = false;
    
    printf("Digite o dia, mes e ano de seu nascimento: ");
    scanf("%d %d %d", &dd, &mm, &aa);

    //verifica se o ano eh bissexto
    if(aa%400 == 0 || (aa%4 == 0 && aa%100 != 0)){
        bissexto = true;
    }

    //verifica a validade da data
    if(aa > 2023){
        val = false;
    }
    else if(mm < 1 || mm > 12){
        val = false;
    }else if(dd < 1 || dd > 31){
        val = false;
    }else if(mm == 2 && bissexto == true && dd > 29){
        val = false;
    }else if(mm == 2 && bissexto == false && dd > 28){
        val = false;
    }else if((mm == 4 || mm == 6 || mm == 9 || mm == 11 ) && dd > 30){
        val = false;
    }

    if(val == false){
        printf("Data invalida\n");
    }else{
        printf("Data valida\n");
    }
    
    system("pause");
    return 0;
}