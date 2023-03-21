#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância
da origem (0, 0).
*/

int main()
{
    float x, y, dist;

    printf("Insira x e y: ");
    scanf("%f %f", &x, &y);

    dist = sqrt((x*x) + (y*y));
    
    printf("Distancia = %fu.c \n", dist);
    system("pause");

    return 0;
}