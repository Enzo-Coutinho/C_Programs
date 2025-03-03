#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5] = {0};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(j == i)
            {
                matriz[i][j] = 1;
            }
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("Matriz[%d][%d] = %d \n", i, j, matriz[i][j]);
        }
    }
    return 0;
}
