#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido.
*/

int main()
{
    int ab, ba;

    printf("Insira um numero inteiro [100, 999]: ");
    scanf("%d", &ab);
    ba = ((ab % 10) * 100) + (((ab % 100)/10)*10) + ((ab/100));
   
    /*
    1 - ((ab % 10) * 100) -> no resto por 10, sobra a unidade, que é transformada em centena
    2 - (((ab % 100)/10)*10) -> no resto por cem, sobra a dezena e a unidade. A divisão por 10 remove a unidade, 
         pois passa a ser uma casa decimal. A multiplicação por 10 retorna ao valor em dezenas
    3 - A divisão por cem resulta na casa da centena, inteira
    */

   /*
   usando 123 como exemplo: 
   (123 % 10) = 3 -> 3 * 100 = 300
   (123 % 100) = 23 -> 23 / 10 = 2 -> 2 * 10 = 20
   123/100 = 1
   ba = 300 + 20 + 1
    */
   
    printf("%d \n", ba);
    system("pause");

    return 0;
}