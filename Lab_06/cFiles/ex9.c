#include <stdio.h>
#include <math.h>

/*crie e leia dois números complexos z e w, compostos por parte real e parte imaginária;
Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo
de ambos*/

struct numeroComplexo{
    float real, imaginaria;
};
typedef struct numeroComplexo numeroComplexo;

int main(){
    numeroComplexo z, w;

    printf("Insira a parte real do numero complexo z: ");
    scanf("%f", &z.real);
    printf("Insira a parte imaginaria do numero complexo z: ");
    scanf("%f",&z.imaginaria);
    printf("Insira a parte real do numero complexo w: ");
    scanf("%f", &w.real);
    printf("Insira a parte imaginaria do numero complexo w: ");
    scanf("%f",&w.imaginaria);

    printf("z+w = %.2f + (%.2f)i\n", z.real + w.real, z.imaginaria + w.imaginaria);
    printf("z-w = %.2f + (%.2f)i\n", z.real - w.real, z.imaginaria - w.imaginaria);
    printf("z*w = %.2f + (%.2f)i\n", ((z.real * w.real)-(z.imaginaria*w.imaginaria)), ((z.real*w.imaginaria)+(z.imaginaria*w.real)));
    printf("|z| = %.2f\n", sqrt(pow(z.real, 2) + pow(z.imaginaria, 2)));
    printf("|w| = %.2f\n", sqrt(pow(w.real, 2) + pow(w.imaginaria, 2)));

    return 0;
}