// Questão 1 - Endereço de memória
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Valor: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void *)&numero);

    return 0;
}
