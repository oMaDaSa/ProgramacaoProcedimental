#include <stdio.h>

int main(){
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;

    printf("Insira A, B e C: ");
    scanf("%d %d %d", pa, pb, pc);

    if(a < b && b < c) printf("%d - %p \n%d - %p \n %d - %p", a, pa, b, pb, c, pc);
    else if(a < c && c < b) printf("%d - %p \n%d - %p \n%d - %p", a, pa, c, pc, b, pb);
    else if(b < a && a < c) printf("%d - %p \n%d - %p \n%d - %p", b, pb, a, pa, c, pc);
    else if(b < c && c < a) printf("%d - %p \n%d - %p \n%d - %p", b, pb, c, pc, a, pa);
    else if(c < a && a < b) printf("%d - %p \n%d - %p \n%d - %p", c, pa, a, pa, b, pb);
    else if(c < b && b < a) printf("%d - %p \n%d - %p \n%d - %p", c, pc, b, pb, c, pc);

    return 0;
}