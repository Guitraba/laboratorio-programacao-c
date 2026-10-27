/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pares = 0;
    int numeros[3][3];
    
    //criar a matriz
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("numero[%d][%d] ",i,j);
            scanf("%d", &numeros[i][j]);
        }
         printf("\n");
    }
    
    // mostrar a matriz
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }
    
    // contador de pares lembrar de botar as variaveis no inicio
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(numeros[i][j]%2 == 0){
                pares++;
            }
        }
    }
    printf("\n");
    printf("quantidade de numeros pares: %d",pares);
    return 0;
}