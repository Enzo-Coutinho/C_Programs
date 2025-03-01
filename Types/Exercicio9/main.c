#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int idade;
    int alturaCM;
} Atleta;

int main()
{
    Atleta atletas[5];
    Atleta maisAlto = {};
    Atleta maisVelho = {};
    for(int i=0; i<5; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite o nome do atleta: ");
        fgets(atletas[i].nome, 30, stdin);
        printf("Digite a idade do atleta: ");
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura do atleta em CM: ");
        scanf("%d", &atletas[i].alturaCM);
        if(atletas[i].idade > maisVelho.idade) maisVelho = atletas[i];
        if(atletas[i].alturaCM > maisAlto.alturaCM) maisAlto = atletas[i];
    }
    printf("O atleta mais velho tem o nome de %s, com idade de %d e altura de %d: \n", maisVelho.nome, maisVelho.idade, maisVelho.alturaCM);
    printf("O atleta mais alto tem o nome de %s, com idade de %d e altura de %d: \n", maisAlto.nome, maisAlto.idade, maisAlto.alturaCM);
    return 0;
}
