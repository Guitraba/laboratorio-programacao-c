/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome [50];
    
    printf("Digite seu nome inteiro\n");
    scanf("%49[^\n]",&nome);
    
    printf("Primeira letra:");
      printf("%c\n", nome[0]);
    
    return 0;
}