#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro
{
    char nome[30];
    int idade;
    char rua[30];
    int numero;
} pessoa1;

int main()
{
    printf("Digite o nome da rua: ");
    fgets(pessoa1.rua, 30, stdin);
    printf("Digite seu nome: ");
    fgets(pessoa1.nome, 30, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite o numero da casa: ");
    scanf("%d", &pessoa1.numero);

    printf("Seu nome eh: ");
    fputs(pessoa1.nome, stdout);
    printf("Sua idade eh: %d \n", pessoa1.idade);
    printf("Sua rua eh: ");
    fputs(pessoa1.rua, stdout);
    printf("O numero dela eh: %d", pessoa1.numero);

    return 0;
}
