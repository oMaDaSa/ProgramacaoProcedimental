#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos
*/

int main(){
    float n1, n2, n3, media;
    printf("Insira as notas 1, 2 e 3, respectivamente: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    media = (n1+n2+n3*2)/4;
    if(media >= 60){
        printf("Estudante aprovado com media de %.2f pontos\n", media);
    }else{
        printf("Estudante reprovado com media de %.2f pontos\n", media);
    } 

    system("pause");
    return 0;
}