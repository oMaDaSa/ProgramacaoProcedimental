#include <stdio.h>
#include <string.h>

/*
Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma
data válida, e calcule o número de dias que decorreram entre as duas datas.
*/

struct dma{
    int dia, mes, ano;
};
typedef struct dma dma;

int validaData(int dd,int mm,int aa);
int calculaDias(dma data1, dma data2);

int main(){
    dma data[2];
    int i, validade, dias;

    for(i = 0; i < 2; i++){
        printf("\n -Insira a data %d-\n", i+1);

        do{
            printf("Insira a data: ");
            scanf("%d/%d/%d",&data[i].dia,&data[i].mes,&data[i].ano);
            validade = validaData(data[i].dia, data[i].mes, data[i].ano);
            if(validade == 0) printf("Data invalida, insira novamente\n");
        }while(!(validade));
    }

    dias = calculaDias(data[0], data[1]);
    if(dias == 0) dias = calculaDias(data[1], data[0]);
    printf("Se passaram %d dias\n",dias);

    return 0;
}

int validaData(int dd,int mm,int aa){
    int val = 1, bissexto = 0;

    //verifica se o ano eh bissexto
    if(aa%400 == 0 || (aa%4 == 0 && aa%100 != 0)){
        bissexto = 1;
    }

    //verifica a validade da data
    if(mm < 1 || mm > 12){
        val = 0;
    }else if(dd < 1 || dd > 31){
        val = 0;
    }else if(mm == 2 && bissexto == 1 && dd > 29){
        val = 0;
    }else if(mm == 2 && bissexto == 0 && dd > 28){
        val = 0;
    }else if((mm == 4 || mm == 6 || mm == 9 || mm == 11 ) && dd > 30){
        val = 0;
    }

    return val;
}

int calculaDias(dma data1, dma data2){
    int dias = 0, bissexto = 0, diasNoMes;

    while(data2.ano - data1.ano > 1){
        if(data1.ano%400 == 0 || (data1.ano%4 == 0 && data1.ano%100 != 0)) bissexto = 1; //verifica se ano bissexto

        if(bissexto){
            dias+=366;
        }else{
            dias+=365;
        }
        data1.ano++;
    }

    while(data2.ano > data1.ano){;
        data1.dia++;
        dias++;
        if(data1.ano%400 == 0 || (data1.ano%4 == 0 && data1.ano%100 != 0)) bissexto = 1; //verifica se ano bissexto
        //define quantos dias tem o mes
        if(data1.mes == 4 || data1.mes == 6 || data1.mes == 9 || data1.mes == 11 ) diasNoMes = 30;
        else if(data1.mes == 2 && bissexto) diasNoMes = 29;
        else if(data1.mes == 2 && !bissexto) diasNoMes = 28;
        else diasNoMes = 31;

        if(data1.dia>diasNoMes){
            data1.mes++;
            data1.dia = 1;
        }
        if(data1.mes>12){
            data1.ano++;
            data1.mes = 1;
        }
    }  

    while(data2.mes > data1.mes){;
        data1.dia++;
        dias++;
        if(data1.ano%400 == 0 || (data1.ano%4 == 0 && data1.ano%100 != 0)) bissexto = 1; //verifica se ano bissexto
        //define quantos dias tem o mes
        if(data1.mes == 4 || data1.mes == 6 || data1.mes == 9 || data1.mes == 11 ) diasNoMes = 30;
        else if(data1.mes == 2 && bissexto) diasNoMes = 29;
        else if(data1.mes == 2 && !bissexto) diasNoMes = 28;
        else diasNoMes = 31;

        if(data1.dia>diasNoMes){
            data1.mes++;
            data1.dia = 1;
        }
        if(data1.mes>12){
            data1.ano++;
            data1.mes = 1;
        }
    } 

    while(data2.dia > data1.dia){;
        data1.dia++;
        dias++;
        if(data1.ano%400 == 0 || (data1.ano%4 == 0 && data1.ano%100 != 0)) bissexto = 1; //verifica se ano bissexto
        //define quantos dias tem o mes
        if(data1.mes == 4 || data1.mes == 6 || data1.mes == 9 || data1.mes == 11 ) diasNoMes = 30;
        else if(data1.mes == 2 && bissexto) diasNoMes = 29;
        else if(data1.mes == 2 && !bissexto) diasNoMes = 28;
        else diasNoMes = 31;

        if(data1.dia>diasNoMes){
            data1.mes++;
            data1.dia = 1;
        }
        if(data1.mes>12){
            data1.ano++;
            data1.mes = 1;
        }
    } 

    //data1.dia != data2.dia  || data1.mes != data2.mes  || data1.ano != data2.ano
    return dias;
}