// Questão 5 - Ponteiros e vetores
#include <stdio.h>

int main()
{
    int vetor[5];
    int *ponteiro = vetor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i));
    }

    return 0;
}
