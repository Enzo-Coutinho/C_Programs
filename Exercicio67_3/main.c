#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[5] = {0};
    int soma = 0;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &values[i]);
        soma += values[i];
    }
    float med = soma / 5.0;
    printf("The med is: %.2f", med);
    return 0;
}
