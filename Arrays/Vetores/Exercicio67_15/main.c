#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10] = {0};
    for(int i=0; i<10; i++)
    {
        printf("Digit a float value to vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
        for(int j=0; j<i; j++)
        {
            float oldestValue = vetor[i];
            if(vetor[i] < vetor[j])
            {
                vetor[i] = vetor[j];
                vetor[j] = oldestValue;
            }
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("The value of vetor[%d] is: ", i);
        printf("%f \n", vetor[i]);
    }
    return 0;
}
