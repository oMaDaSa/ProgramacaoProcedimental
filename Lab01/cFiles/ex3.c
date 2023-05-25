#include <stdio.h>
//Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
int main()
{
    int x, y ,z, soma;
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &x, &y, &z);
    soma = x + y + z;
    printf("Soma = %d", soma);
    return 0;
}