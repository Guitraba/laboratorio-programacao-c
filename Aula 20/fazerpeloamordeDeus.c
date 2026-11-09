#include <stdio.h>
#include <stdlib.h>

typedef struct  {
   char nome[50];
   int idade;
   float salario;
} funcionario;


int main(){

 funcionario f[2];

 for(int i =0;i<2;i++){
    printf("nome: ");
    fgets( f[i].nome, 50, stdin);

    printf("idade: ");
    scanf("%d",& f[i].idade);

    printf("salario: ");
    scanf("%f",& f[i].salario);

    getchar();

 }
    for(int i =1;i<3;i++){
    printf("funcionario[%d]\n",i);
    printf("nome:%s \n",f[i].nome);
    printf("idade:%d \n",f[i].idade);
    printf("salario:%f \n",f[i].salario);
    }



    return 0;
}
