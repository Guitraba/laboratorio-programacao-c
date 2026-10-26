//3. Criar uma matriz 3×3, somar todos os seus elementos e apresentar o resultado.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma;
    int numeros [3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", numeros[i][j]);
            soma +=numeros[i][j];
        }
        printf("\n");
    }
    printf("%d", soma);
    return 0;
}
