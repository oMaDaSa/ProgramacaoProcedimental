#include <stdio.h> 

/*Faça um programa que possua uma função para:
 - ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler
2 notas válidas e que devolver os 2 números lidos);
 - calcular a média simples e a média ponderada e retorná-las por parâmetro,
onde a segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3
*/

void getNotes(float  *n1, float *n2);
float media(float *notas, char x);

int main(){
    float notas1[2];
    getNotes(&notas1[0], &notas1[1]);
    printf("Media simples: %.2f\n", media(notas1, 's'));
    printf("Media ponderada: %.2f\n", media(notas1, 'p'));
    return 0;
}
    
void getNotes(float *n1, float *n2){
    do{
        printf("Insira a nota 1: ");
        scanf("%f", n1);
    }while(*n1 < 0);

    do{
        printf("Insira a nota 2: ");
        scanf("%f", n2);
    }while(*n2 < 0);
}

float media(float *notas, char x){
    float soma, media;
    if(x == 's'){
        soma = notas[0] + notas[1];
        media = soma/2;
    }else if(x == 'p'){
        soma = notas[0] + notas[1]*2;
        media = soma/3;
    }
    return media;
}