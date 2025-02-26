#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3] = {0};
    float lowest = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Digit a float value to matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            if(matriz[i][j] < lowest)
            {
                lowest = matriz[i][j];
            }
        }
    }
    printf("The lowest value is: %f", lowest);
    return 0;
}
