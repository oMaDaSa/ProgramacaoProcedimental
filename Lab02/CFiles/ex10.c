#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
    Homens: (72,7 * h) – 58,0
    Mulheres: (62,1 * h) – 44,7
*/

int main(){
    float h, pesoIdeal;
    char sexo;
    printf("Altura em m: ");
    scanf("%f",&h);
    printf("Sexo [h ou m]: ");
    scanf(" %c",&sexo);

    if(sexo == 'h' || sexo == 'H'){
        pesoIdeal = (72.7 * h) - 58.0;
        
    }
    else if(sexo == 'm' || sexo == 'M'){
        pesoIdeal = (62.1 * h) - 44,7;
    }
    else{
        printf("Sexo invalido\n");
        system("pause");
        return 0;
    }
    
    printf("Peso ideal = %f\n",pesoIdeal);

    system("pause");
    return 0;
}