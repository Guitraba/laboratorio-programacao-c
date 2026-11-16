#include <stdio.h>
int main(void) {

int numero;
int *p = &numero;

printf("digite um numero de 1 a 100\n");
scanf("%d",&numero);

printf("endereco :%p\n",&numero);
printf("valor :%d",*p);
 return 0;
}
