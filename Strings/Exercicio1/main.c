#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[20];
    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);
    fputs(nome, stdout);
    return 0;
}
