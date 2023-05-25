#include <stdio.h>
#include <stdlib.h>

/*
Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

int main()
{
    int s, h, m;
    printf("Insira os segundos: ");
    scanf("%d", &s);
    h = (s/60)/60;
    s = s - (h*60*60);
    m = s/60;
    s = s - (m*60);

    printf("%d horas, %d minutos e %d segundos \n", h, m, s);
    system("pause");

    return 0;
}