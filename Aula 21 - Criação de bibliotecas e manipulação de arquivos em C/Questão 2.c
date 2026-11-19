// Questão 2 - Gravar e ler números em arquivo
#include <stdio.h>

int main()
{
    FILE *arquivo;
    int numero;

    arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 1; i <= 5; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);
    printf("\nNumeros gravados em numeros.txt!\n");

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("\n=== Numeros armazenados ===\n");
    while (fscanf(arquivo, "%d", &numero) == 1) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}
