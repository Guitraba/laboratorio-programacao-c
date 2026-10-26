
//1.Criar uma matriz 2×2 com valores definidos no código e exibi-la em formato de tabela.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros [2][2]={
        {10,20},
        {30,40}
    };
    for (int i=0;i<2;i++){

    for (int j=0;j<2;j++){
        printf("%d ", numeros[i][j]);
    }
    printf("\n");
}
    return 0;
}
