// Questão 3 - Alteração de valores com ponteiro
#include <stdio.h>

int main()
{
    int numero = 15;
    int *ponteiro = &numero;

    printf("Valor antes: %d\n", numero);

    *ponteiro = 50;

    printf("Valor depois: %d\n", numero);

    return 0;
}
