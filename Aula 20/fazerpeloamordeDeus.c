#include <stdio.h>

typedef struct Funcionario {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main()
{
    Funcionario funcionario1, funcionario2;

    printf("--- Funcionario 1 ---\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario1.nome);
    printf("Idade: ");
    scanf("%d", &funcionario1.idade);
    printf("Salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\n--- Funcionario 2 ---\n");
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario2.nome);
    printf("Idade: ");
    scanf("%d", &funcionario2.idade);
    printf("Salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n=== Dados cadastrados ===\n");
    printf("Funcionario 1: %s, %d anos, R$ %.2f\n",
           funcionario1.nome, funcionario1.idade, funcionario1.salario);
    printf("Funcionario 2: %s, %d anos, R$ %.2f\n",
           funcionario2.nome, funcionario2.idade, funcionario2.salario);

    printf("\n=== Resultado ===\n");
    if (funcionario1.salario > funcionario2.salario) {
        printf("Maior salario: %s\n", funcionario1.nome);
        printf("Diferenca salarial: R$ %.2f\n",
               funcionario1.salario - funcionario2.salario);
    } else if (funcionario2.salario > funcionario1.salario) {
        printf("Maior salario: %s\n", funcionario2.nome);
        printf("Diferenca salarial: R$ %.2f\n",
               funcionario2.salario - funcionario1.salario);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario.\n");
    }

    return 0;
}

    return 0;
}
