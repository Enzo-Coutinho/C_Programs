#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[10] = {0};
    int sumOfPositiveNumbers, countOfNegativeNumbers = 0;
    for(int i=0; i<10; i++)
    {
        scanf("%f", &vet[i]);
        if(vet[i] >= 0)
        {
            sumOfPositiveNumbers += vet[i];
        } else
        {
            countOfNegativeNumbers++;
        }
    }
    printf("The sum is: %d \n", sumOfPositiveNumbers);
    printf("The number of -: %d", countOfNegativeNumbers);
    return 0;
}
