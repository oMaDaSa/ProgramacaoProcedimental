#include <stdio.h>

int main(){

    int V[6], i, *pV = &V[0];

    for(i = 0; i < 6; i++){
        printf("Insira V[%i]: ", i);
        scanf("%d", pV + i);
    }

    for(i = 0; i < 6; i++){
        printf("V[%d] = %d - %p\n", i, *(pV+i), pV + i);
    }

    return 0;
}