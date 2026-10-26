//2. Armazenar as notas de três alunos em duas provas e calcular a média de cada aluno
#include <stdio.h>
#include <stdlib.h>

int main(){
 int notas[2][3];

//entrada na nota

 for (int i = 0;i<2;i++){
    for(int j = 0;j<3;j++){
    printf("notas[%d][%d] ",i,j);
    scanf("%d", & notas[i][j]);
  }
  printf("\n");
 }

 //saida das notas

  for (int i = 0;i<2;i++){
    for(int j = 0;j<3;j++){
            printf("%d ",notas[i][j]);
    }
    printf("\n");
}
//soma e media das notas
//lembrar (float)soma é para conversão
for(int j = 0;j<3;j++){
   int soma = 0;
   float media = 0;
    for (int i = 0;i<2;i++){
        soma += notas[i][j];
        media = (float)soma/2;
    }
    printf("%.2f ",media);

}
    return 0;
}
