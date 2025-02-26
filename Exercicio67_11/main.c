#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base[8] = {0}, square[8] = {0};
    for(int i=0; i<8; i++)
    {
        scanf("%f", &base[i]);
        square[i] = base[i] * base[i];
    }
    for(int i=0; i<8; i++)
    {
        printf("Base[%d] is = %f \n", i, base[i]);
        printf("Square[%d] is = %f \n", i, square[i]);
    }
    return 0;
}
