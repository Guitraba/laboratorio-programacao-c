// Questão 4 - Dobro do estoque
#include <stdio.h>

int dobro(int quantidade)
{
    return quantidade * 2;
}

int main()
{
    int inicial, final;

    printf("Digite a quantidade inicial em estoque: ");
    scanf("%d", &inicial);

    final = dobro(inicial);

    printf("Quantidade inicial: %d\n", inicial);
    printf("Quantidade final (dobro): %d\n", final);

    return 0;
}
