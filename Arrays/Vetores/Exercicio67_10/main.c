#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[100] = {0};
    int n = 0, iter = 0;
    while(vet[99] == 0)
    {
        if(iter % 7)
        {
            vet[n] = iter;
            n++;
        }
        iter++;
    }

    for(int i=0; i<100; i++)
    {
        printf("%d : %d \n", i ,vet[i]);
    }

    return 0;
}
