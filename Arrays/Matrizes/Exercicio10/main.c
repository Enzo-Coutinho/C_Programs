#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notasAlunos[10][3] = {0};
    int piorNota[3] = {0};
    for(int i=0; i<10; i++)
        for(int j=0; j<3; j++)
        {
            float nota;
            printf("Digits the note %d of student %d: ", j, i);
            scanf("%f", &nota);
            notasAlunos[i][j] = nota;
        }
    for(int i=0; i<10; i++)
    {
        float oldestValue = notasAlunos[i][0];
        for(int j=0; j<3; j++)
        {
            if(notasAlunos[i][j] < oldestValue)
            {
                piorNota[j]++;
            }
            oldestValue = notasAlunos[i][j];
        }
    }
    for(int i=0; i<3; i++)
        printf("The qtd in prova [%d] is: %d \n", i, piorNota[i]);
    return 0;
}
