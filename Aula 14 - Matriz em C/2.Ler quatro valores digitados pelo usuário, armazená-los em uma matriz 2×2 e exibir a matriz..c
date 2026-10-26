//2.Ler quatro valores digitados pelo usuário, armazená-los em uma matriz 2×2 e exibir a matriz.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [2][2]={
    };
    for (int i=0;i<2;i++){

    for (int j=0;j<2;j++){
        printf("numeros[%d][%d]: ",i,j);
        scanf("%d",& numeros[i][j]);
    }
    printf("\n");
}
    for (int i=0;i<2;i++){

    for (int j=0;j<2;j++){
        printf("%d ", numeros[i][j]);
    }
    printf("\n");
}

    return 0;
}
