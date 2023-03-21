#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
*/

int main()
{
    float c, l, precoMetro, perimetro, custo;

    printf("Insira o comprimento e a largura, respectivamente: ");
    scanf("%f %f", &c, &l);
    printf("Insira o preco do metro de tela: ");
    scanf("%f", &precoMetro);
    
    perimetro = c * 2 + l * 2;
    custo = perimetro * precoMetro;

    printf("Custo = %.2f reais \n", custo);
    system("pause");

    return 0;
}