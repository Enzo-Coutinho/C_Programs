#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[4][4] = {{0, 0}};
    float lowest = 0;
    int row = 0, col = 0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Digit a float value to matriz[%d][%d]", i, j);
            scanf("%f", &matriz[i][j]);
            if(matriz[i][j] < lowest)
            {
                lowest = matriz[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("The lowest value is %.2f in matriz[%d][%d]", lowest, row, col);
    return 0;
}
