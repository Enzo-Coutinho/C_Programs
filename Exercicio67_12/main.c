#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10] = {0};
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
    }
    int previousValues = vet[0];
    for(int i=1; i<10; i++)
    {
        if(previousValues == vet[i])
        {
            printf("These numbers are duplicated %d \n", vet[i]);
        }
        previousValues = vet[i];
    }
    return 0;
}
