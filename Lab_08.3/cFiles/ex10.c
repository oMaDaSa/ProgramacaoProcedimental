#include <stdio.h> 

/*Crie uma função para somar dois arrays. Esta função deve receber dois
arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro
e segundo array seja diferente então a função retornará ZERO (0). Caso a
função seja concluída com sucesso a mesma deve retornar o valor UM (1).
Utilize aritmética de ponteiros para manipulação do array*/

int somarArrays(int *arr1, int *arr2, int *arrres, int n1, int n2);

int main(){
    int arr1[5], arr2[5], res[5];

    //inserindo array 2
    printf("\nInserindo array 1:\n");
    for(int i = 0; i < 5; i++){
        printf("A1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    //inserindo array 2
    printf("\nInserindo array 2:\n");
    for(int i = 0; i < 5; i++){
        printf("A2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    
    somarArrays(arr1, arr2, res, 5, 5);

    //print array resultante
    printf("\nArray resultante:\n");
    for(int i = 0; i < 5; i++){
        printf("Res[%d] = %d\n", i, *(res+i));
    }
    return 0;
}

int somarArrays(int *arr1, int *arr2, int *res, int n1, int n2){
    if(n1 != n2) return 0;
    for(int i = 0; i < n1; i++){
        *(res+i) = *(arr1+i) + *(arr2+i);
    }
    return 1;
}