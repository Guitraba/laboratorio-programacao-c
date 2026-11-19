#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], perfil[20], confirmacao[50], mensagem[100];

    printf("Digite o primeiro nome: ");
    scanf("%49s", nome);
    printf("Digite o perfil de acesso (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    printf("\nQuantidade de caracteres do nome: %d\n", (int)strlen(nome));

    strcpy(confirmacao, nome);

    strcpy(mensagem, "Bem-vindo, ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n=== Dados cadastrados ===\n");
    printf("Nome: %s\n", nome);
    printf("Nome (confirmacao): %s\n", confirmacao);

    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: ADMIN (acesso total)\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: COMUM (acesso limitado)\n");
    } else {
        printf("Perfil invalido!\n");
    }

    printf("\n%s\n", mensagem);

    return 0;
}
