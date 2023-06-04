#include <stdio.h>
#define pi 3.14159    

/*Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area, float *volume);*/

void calc_esfera(float R, float *area, float *volume);

int main(){
    float r, area, volume;
    printf("Insira o valor do raio: ");
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);

    printf("A esfera de raio %.2f tem area %.2f e volume %.2f", r, area, volume);
    
    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4*pi*R*R;
    *volume = 4.0/3.0 * pi * R * R * R; 
}