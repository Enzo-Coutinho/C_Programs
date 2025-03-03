#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3] = {0};
    float sum = 0;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        {
            float value;
            printf("Digit a value to matriz[%d][%d]: ", i, j);
            scanf("%f", &value);
            if(j == i) sum += value;
        }
    printf("The sum is: %f", sum);
    return 0;
}
