// Questão 3 - Cadastro de funcionários com struct e arquivo
#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main()
{
    FILE *arquivo;
    Funcionario f;
    int quantidade;

    do {
        printf("Quantos funcionarios deseja cadastrar agora (1 a 5)? ");
        scanf("%d", &quantidade);
    } while (quantidade < 1 || quantidade > 5);

    // "a" = acrescenta no final, sem apagar os registros anteriores
    arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("\n--- Funcionario %d ---\n", i);
        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);

        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);
    printf("\nDados gravados com sucesso!\n");

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("\n=== Funcionarios cadastrados ===\n");
    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}
