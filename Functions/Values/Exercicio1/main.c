#include <stdio.h>
#include <stdlib.h>

float max(float n1, float n2)
{
    return n1 > n2 ? n1 : n2;
}

int main()
{
    float n1, n2;
    printf("Digite two numbers: ");
    scanf("%f %f", &n1, &n2);
    float maxNumber = max(n1, n2);
    printf("The max number is: %f", maxNumber);
    return 0;
}
