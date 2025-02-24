#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[100] = {0};
    for(int i=0; !vet[99]; i++)
    {
        if(i % 7)
        {
            vet[i] = i;
        }
    }
    for(int i=0; i<100; i++)
    {
        printf("%d \n", vet[i]);
    }
    return 0;
}
