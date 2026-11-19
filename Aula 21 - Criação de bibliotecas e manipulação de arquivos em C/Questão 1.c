// Questão 1 - Cadastro de funcionários em arquivo
#include <stdio.h>

int main()
{
    FILE *arquivo;
    char nome[50];
    int matricula, quantidade;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &quantidade);
    } while (quantidade < 1 || quantidade > 5);

    arquivo = fopen("funcionarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("\n--- Funcionario %d ---\n", i);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "%s;%d\n", nome, matricula);
    }

    fclose(arquivo);

    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}
