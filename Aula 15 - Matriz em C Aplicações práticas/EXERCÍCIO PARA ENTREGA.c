//EXERCÍCIO PARA ENTREGA:
 //Atividade – Reserva de assentos no cinema Um cinema possui três fileiras com quatro assentos em cada uma. O sistema utiliza uma matriz de números inteiros para representar a ocupação dos assentos, sendo 0 para disponível e 1 para ocupado.

//Desenvolva um programa em C que armazene a situação dos assentos em uma matriz 3×4, percorra todos os seus elementos utilizando estruturas de repetição e apresente a quantidade de assentos ocupados e disponíveis:

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ocupado,livres,total;
    int fileira[3][4]={
        {0,1,0,0},
        {1,1,0,0},
        {0,0,1,0}
    };
    int linhas = sizeof(fileira)/sizeof(fileira[0]);

    int colunas = sizeof(fileira[0])/sizeof(fileira[0][0]);

    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
                printf("%d",fileira[i][j]);

                if(fileira[i][j] == 1){
                ocupado += fileira[i][j];

                }
                total = linhas*colunas;
                livres = total - ocupado;
        }
        printf("\n");
    }
    printf("Quantidade de cadeiras ocupadas %d\n",ocupado);
    printf("Quantidade de cadeiras livres %d",livres);
    return 0;
}
