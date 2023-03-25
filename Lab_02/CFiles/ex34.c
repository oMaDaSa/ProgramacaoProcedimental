#include <stdio.h>
#include <stdlib.h>

/*
Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
NOTA CONCEITO (ATÉ 20 FALTAS) CONCEITO (MAIS DE 20 FALTAS)
9.0 até 10.0 A B
7.5 até 8.9 B C
5.0 até 7.4 C D
4.0 até 4.9 D E
0.0 até 3.9 E E
*/

int main(){
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota [0, 10]: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if(nota >= 9){
        conceito = 'A';
    }else if(nota >= 7.5){
        conceito = 'B';
    }else if(nota >= 5.0){
        conceito = 'C';
    }else if(nota >= 4.0){
        conceito = 'D';
    }else{
        conceito = 'E';
    }

    if(faltas > 20 && conceito < 'E'){
        conceito++;
    }

    printf("Conceito %c\n",conceito);
    system("pause");
    return 0;
}