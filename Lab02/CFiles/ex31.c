#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
seguir, verifique e mostra qual a classificação dessa pessoa.
*/

int main(){
    float h, p;
    char clas;
    
    printf("Digite a altura: ");
    scanf("%f", &h);
    printf("Digite o peso: ");
    scanf("%f", &p);

    if(h<1.2){
        if(p < 60){
            clas = 'A';
        }else if(p>=60 && p<= 90){
            clas = 'D';
        }else{
            clas = 'G';
        }
    }else if(h>=1.2 && h<=1.7){
        if(p < 60){
            clas = 'B';
        }else if(p>=60 && p<= 90){
            clas = 'E';
        }else{
            clas = 'H';
        }
    }else{
        if(p < 60){
            clas = 'C';
        }else if(p>=60 && p<= 90){
            clas = 'F';
        }else{
            clas = 'I';
        }
    }

    printf("A classificacao dessa pessoa eh %c\n", clas);
    system("pause");
    return 0;
}