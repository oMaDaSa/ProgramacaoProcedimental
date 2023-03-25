#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.
*/

int main(){
    float n1, n2, n3, media;
    printf("Insira a nota do trabalho [0, 10]: ");
    scanf("%f", &n1);
    printf("Insira a nota da avaliacao semestral [0, 10]: ");
    scanf("%f", &n2);
    printf("Insira a nota do exame final [0, 10]: ");
    scanf("%f", &n3);

    media = (n1*2 + n2*3 + n3*5)/10;
    printf("%.2f", media);
    if(media < 3){
        printf("Estudante reprovado :(\n");
    }else if(media >= 3 && media < 5){
        printf("Estudante de recuperacao :/\n");
    }else{
        printf("Estudante Aprovado :D\n");
    }

    system("pause");
    return 0;
}