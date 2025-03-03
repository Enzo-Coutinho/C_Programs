#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int lenght = 10;
    float sum = 0;
    float vetor[lenght];
    for(int i=0; i<lenght; i++)
    {
        printf("Digits the vetor[%d] value: ", i);
        scanf("%f", &vetor[i]);
        sum += vetor[i];
    }
    float media = (float)sum / lenght;
    double desv = sqrt((1.0 / (lenght - 1.0)) * (sum - media));
    printf("The desvio is = %lf", desv);
    return 0;
}
