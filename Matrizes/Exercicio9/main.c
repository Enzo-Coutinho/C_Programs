#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3] = {0};
    int sum[3] = {0};
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
            int value;
            printf("Digit a value to matriz[%d][%d]: ", i, j);
            scanf("%d", &value);
            matriz[i][j] = value;
        }
    for(int j=0; j<3; j++)
    {
        for(int i=0; i<3; i++)
        {
            sum[j] += matriz[i][j];
        }
        printf("The sum[%d] is: %d \n", j, sum[j]);
    }
    return 0;
}
