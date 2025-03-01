#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char nome[30];
  int anoNascimento, mes, dia;
} Pessoa;

int main()
{
    Pessoa pessoas[6];
    for(int i=0; i<6; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome de uma pessoa: ");
        fgets(pessoas[i].nome, 30, stdin);
        printf("Digite a data de nascimento dela: ");
        scanf("%d/%d/%d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].anoNascimento);
    }
    Pessoa maisJovem = pessoas[0];
    Pessoa maisVelha = pessoas[0];
    for(int i=0; i<6; i++)
    {

    }
    printf("O nome e data de nascimento da pessoas mais velha eh: %s, %d/%d/%d \n", maisVelha.nome, maisVelha.dia, maisVelha.mes, maisVelha.anoNascimento);
    printf("O nome e data de nascimento da pessoas mais jovem eh: %s, %d/%d/%d \n", maisJovem.nome, maisJovem.dia, maisJovem.mes, maisJovem.anoNascimento);
    return 0;
    }
}
