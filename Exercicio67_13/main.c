#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10] = {0};
    for(int i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
        for(int j=0; j<i; j++)
        {
            if(vet[i] == vet[j])
            {
                int newValue;
                printf("This value already exists, digit other: ");
                scanf("%d", &newValue);
                vet[i] = newValue;
            }
        }
        int actualValue = vet[i];
    }
    return 0;
}

