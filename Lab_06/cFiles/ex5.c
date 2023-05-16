#include <stdio.h>

/*implemente um programa que calcule a soma de dois vetores*/

struct vetor{
    float a, b, c
};
typedef struct vetor vetor;

int main(){
    vetor vetor[3];
    int i;
    for(i = 0; i < 2; i++){
        printf("Insira as coordenas de V%d:\n",i+1);
        printf("x: ");
        scanf("%f",&vetor[i].a);
        printf("y: ");
        scanf("%f",&vetor[i].b);
        printf("z: ");
        scanf("%f",&vetor[i].c);
        printf("\n");
    }
    printf("Coordenas de V2:\n");
    vetor[2].a = vetor[0].a + vetor[1].a;
    vetor[2].b = vetor[0].b + vetor[1].b;
    vetor[2].c = vetor[0].c + vetor[1].c;

    printf("(%.2f, %.2f, %.2f)", vetor[2].a, vetor[2].b, vetor[2].c);
    return 0;
}