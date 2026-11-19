/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char palavra[50];
    int vogais = 0;

    printf("Digite uma palavra\n");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' ||
            palavra[i] == 'o' || palavra[i] == 'u') {
            vogais++;
        }
    }

    printf("Vogais: %d\n", vogais);

    return 0;
}