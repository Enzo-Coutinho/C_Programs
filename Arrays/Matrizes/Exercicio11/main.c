#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[5][5] = {0};
    float sum = 0;
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
        {
            float value;
            printf("Digit a value to matriz[%d][%d]: ", i, j);
            scanf("%f", &value);
            matriz[i][j] = value;
            if(i)
        }
    return 0;
}
