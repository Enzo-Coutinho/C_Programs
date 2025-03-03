#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[4][4] = {0};
    int numberGreaterThanTen = 0;
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
        {
            float value;
            printf("Digit a value to matriz[%d][%d]: ", i, j);
            scanf("%f", &value);
            if(value > 10) numberGreaterThanTen++;
        }
    printf("The qtd is: %d", numberGreaterThanTen);
    return 0;
}
