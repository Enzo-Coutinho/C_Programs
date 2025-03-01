#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int idade;
    int altura;
} Atleta;

int main()
{
    Atleta atletas[5];
    for(int i=0; i<5; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite um nome para o atleta %d: ", i);
        fgets(atletas[i].nome, 30, stdin);
        printf("Digite a idade para o atleta %d: ", i);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura para o atleta %d: ", i);
        scanf("%d", &atletas[i].altura);
    }
    Atleta atletasOrdenados[5];
    int maiorIdade = atletas[0].idade;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) {
            if(atletas[i].idade > maiorIdade)
            {
                atletasOrdenados[i] = atletas[j];
                maiorIdade = atletas[j].idade;
            }
        }
    for(int i=0; i<5; i++)
    {
        printf("Nome do atleta: %s \n", atletasOrdenados[i].nome);
    }
    return 0;
}
