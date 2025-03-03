#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, k = 1;
    printf("Digite uma quantidade de linhas: ");
    scanf("%d", &row);

    for(int i=1; i <= row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%3d", k++);
        }
        printf("\n");
    }
}
