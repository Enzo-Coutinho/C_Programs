#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[30];
    float notas[3];
    float media;
} Aluno ;

int main()
{
    Aluno estudantes[5];
    for(int i=0; i<5; i++)
    {
        setbuf(stdin, NULL);
        printf("Digite um nome para o estudante: ");
        fgets(estudantes[i].nome, 30, stdin);
        printf("Digite o numero da matricula: ");
        scanf("%d", &estudantes[i].matricula);
        float sum = 0;
        for(int j=0; j<3; j++)
        {
            printf("Digite a nota %d do estudante %d: ", j, i);
            scanf("%f", &estudantes[i].notas[j]);
            sum += estudantes[i].notas[j];
        }
        estudantes[i].media = sum / 3.0;
    }
    float greater = estudantes[0].media;
    int estudante = 0;
    for(int i=0; i<5; i++)
    {
        if(estudantes[i].media > greater)
        {
            estudante = i;
            greater = estudantes[i].media;
        }
    }
    printf("O nome do estudante com maior media eh: %s \n", estudantes[estudante].nome);
    printf("A matricula do estudante com maior media eh: %d \n", estudantes[estudante].matricula);
    for(int i=0; i<3; i++)
    {
        printf("A nota %d do estudante %d eh: %f \n", i, estudante, estudantes[estudante].notas[i]);
    }
    return 0;
}
