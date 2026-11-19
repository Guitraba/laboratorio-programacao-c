// Questão 4 - Ponteiros e funções
#include <stdio.h>

void dobrar(int *valor)
{
    *valor = *valor * 2;
}

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Valor dobrado: %d\n", numero);

    return 0;
}
