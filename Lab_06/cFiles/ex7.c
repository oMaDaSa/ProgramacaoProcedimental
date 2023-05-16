#include <stdio.h>
#include <math.h>

/*
Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
em radianos;
Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
que x = r * cos(a) e y = r * sin(a).
No programa principal, leia um ponto em coordenada polar e mostre as coordenadas do
ponto gerado no plano cartesiano.*/

struct coordPolar{
    float raio, argumento;
};
typedef struct coordPolar coordPolar;

struct coordCart{
    float x, y;
};
typedef struct coordCart coordCart;

int main(){
    coordCart cart; coordPolar polar;

    printf("Insira a coordenadas polar (raio e argumento): ");
    scanf("%f %f", &polar.raio, &polar.argumento);

    cart.x = cos(polar.raio);
    cart.y = sin(polar.argumento);

    printf("Coordenadas cartesianas = (%.2f, %.2f) ", cart.x, cart.y);

    return 0;
}