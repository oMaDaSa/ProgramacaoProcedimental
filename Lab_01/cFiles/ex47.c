#include <stdio.h>
#include <stdlib.h>

/*
 Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
*/

int main()
{
    int x, a, b, c, d;

    printf("Insira um numero inteiro [1000, 9999]: ");
    scanf("%d", &x);

    //usando 1234 como exemplo
    a = x / 1000; // dividir por 1000 resulta no 1 (divisão inteira)
    b = (x / 100) % 10; // dividir por 100 resulta no 12. Resto 10 resulta no 2 (resto da divisão 12/10)
    c = ((x / 10)) % 10; // dividir por 10 resulta no 123. Resto 10 resulta no 3 (resto da divisão 123/10)
    d = x % 10; //Resto 10 resulta no 4 (resto da divisão 1234/10)

    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%d \n", d);

    system("pause");

    return 0;
}