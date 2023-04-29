#include <stdio.h>

/*Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um
menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/

void somarMatrizes(float matrizA[2][2], float matrizB[2][2]);
void subtrairMatrizes(float matrizA[2][2], float matrizB[2][2]);
void adicionarConstante(float matrizA[2][2], float matrizB[2][2], float constante);
void imprimirMatrizes(float matrizA[2][2], float matrizB[2][2]);

int main(){
    int inputMenu = 1;
    float matrizA[2][2], matrizB[2][2], constante = 0;

    //Inserir a matriz A
    printf("Insira a 1a matriz 2x2: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%f", &matrizA[i][j]);
        }
    }
    //Inserir a matrizB
    printf("Insira a 2a matriz 2x2: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%f", &matrizB[i][j]);
        }
    }

    //Programa
    while(inputMenu){
        do{ //Menu
            printf("1 - somar as matrizes\n2 - subtrair a primeira matriz da segunda\n3 - adicionar uma constante as matrizes\n4 - imprimir as matrizes\n0 - Encerrar programa\nOpcao: ");
            scanf("%d",&inputMenu);
            if(inputMenu < 0 || inputMenu > 4)printf("Opcao invalida\n");
        }while(inputMenu < 0 || inputMenu > 4);

        //Realiza as opcoes do menu
        switch (inputMenu)
        {
        case 1:
            somarMatrizes(matrizA, matrizB);
            break;
        case 2:
            subtrairMatrizes(matrizB, matrizA);
            break;
        case 3:
            printf("Insira a constante a ser adicionada: ");
            scanf("%f", &constante);
            adicionarConstante(matrizA, matrizB, constante);
            break;
        case 4:
            imprimirMatrizes(matrizA, matrizB);
            break;
        case 5:
            return 0;
        }
    }
}

void somarMatrizes(float matrizA[2][2], float matrizB[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizA[i][j] += matrizB[i][j];
            matrizB[i][j] = matrizA[i][j];
        }
    }
}

void subtrairMatrizes(float matrizA[2][2], float matrizB[2][2]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizA[i][j] -= matrizB[i][j];
        }
    }
}

void adicionarConstante(float matrizA[2][2], float matrizB[2][2], float constante){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizA[i][j] += constante;
            matrizB[i][j] += constante;
        }
    }
}

void imprimirMatrizes(float matrizA[2][2], float matrizB[2][2]){
    printf("\nMatriz A: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%.2f ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%.2f ", matrizB[i][j]);
        }
        printf("\n");
    }
}