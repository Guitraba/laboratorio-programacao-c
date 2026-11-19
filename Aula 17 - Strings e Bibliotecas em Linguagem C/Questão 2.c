#include <stdio.h>
#include <string.h>

int main()
{
    char produto[50], categoria[20], copia[50], descricao[100];

    printf("Digite o nome do produto: ");
    scanf(" %49[^\n]", produto);
    printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    printf("\nQuantidade de caracteres do nome: %d\n", (int)strlen(produto));

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n=== Resumo do cadastro ===\n");
    printf("Nome: %s\n", produto);

    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: HARDWARE\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: PERIFERICO\n");
    } else {
        printf("Categoria invalida!\n");
    }

    printf("Descricao: %s\n", descricao);

    return 0;
}
