//1. Ler os valores de uma matriz 2×3 e apresentar a soma de todos os elementos
#include <stdio.h>
#include <stdlib.h>

int main(){

int soma;
int matriz[2][3]= {
      {5,10,15},
      {20,25,30}
    };
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",matriz[i][j]);
        soma += matriz [i][j];
    }
    printf("\n");
}
    printf("\n%d",soma);
    return 0;
}
