#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j;
    int matriz[3][3];
    int maior;
    maior = matriz[0][0];

    // criar matriz

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("matriz[%d][%d]",i,j);
            scanf("%d",& matriz[i][j]);
        }
        printf("\n");
    }

    //mostrar matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    //mairo numero
maior = matriz[0][0];

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j]>maior){
               maior = matriz[i][j];
                }
        }
        printf("\n");
    }
    printf("%d",maior);
    return 0;
}
