#include <stdio.h>
#include <string.h>
int main(void) {

// 30 caracteres começa do zero então a primeira letra teria o id 0 e aumentando continuamente então no final eu teria 29 posiçoes de caracter e o ultimo seria reservado para o \0 que é o final
    char nome [30];
    int quantidade;

    printf("nome: ");

    fgets(nome,sizeof(nome),stdin);

// mostrar a coluna e mostrar a quantidade de caracteres utilizadas como a primeira letra começa com zero e a ultima não é uma letra e sim o final mas mesmo assim conta como uma a quantidade de cara
// cteres da certinho

//lembrar q o simples funciona n precisa ser mt complexo o codigo e simples
    for(int i=0;nome[i] !='\0';i++){
        printf(%c\n",nome[i]);
        quantidade =i;
    }
    printf("%d",quantidade);
 return 0;
}
