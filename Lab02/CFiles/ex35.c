#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.
*/

int main(){
    int dd, mm, aa;
    bool val = true, bissexto = false;

    printf("Digite o dia, mes e ano: ");
    scanf("%d %d %d", &dd, &mm, &aa);

    //verifica se o ano eh bissexto
    if(aa%400 == 0 || (aa%4 == 0 && aa%100 != 0)){
        bissexto = true;
    }

    //verifica a validade da data
    if(mm < 1 || mm > 12){
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

    if(val == true){
        printf("Data valida!\n");
    }else{
        printf("Data invalida!\n");
    }

    system("pause");
    return 0;
}