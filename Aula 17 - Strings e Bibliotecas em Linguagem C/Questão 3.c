#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], codigo[10], copia[50], mensagem[100];

    printf("Digite o primeiro nome do estudante: ");
    scanf("%49s", nome);
    printf("Digite o codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    printf("\nQuantidade de caracteres do nome: %d\n", (int)strlen(nome));

    strcpy(copia, nome);

    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n=== Dados do estudante ===\n");
    printf("Nome: %s\n", nome);

    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: codigo invalido!\n");
    }

    printf("Mensagem: %s\n", mensagem);

    return 0;
}
