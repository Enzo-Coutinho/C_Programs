#include <stdio.h>
#include <stdlib.h>

int maiorPrimo(int number)
{
    int max = 0;
    for(int i=1; i<=number; i++)
    {
        if(i == 2 || i % 2)
            if(((number % i) == 0) && i > max)
            {
                max = i;
            }
    }
    return max;
}

int main()
{
    int value;
    scanf("%d", &value);

    int maiorP = maiorPrimo(value);

    printf("%d", maiorP);

    return 0;
}
