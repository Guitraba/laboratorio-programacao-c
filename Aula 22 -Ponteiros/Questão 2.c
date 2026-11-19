// Questão 2 - Utilizando ponteiros
#include <stdio.h>

int main()
{
    int variavel = 20;
    int *ponteiro = &variavel;

    printf("Valor da variavel: %d\n", variavel);
    printf("Endereco da variavel: %p\n", (void *)&variavel);
    printf("Endereco guardado no ponteiro: %p\n", (void *)ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
