#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    float sum = 0;

    for(int i=1; i<=n; i++)
    {
        int fatorial = 1;
        for(int j=1; j<=i; j++)
        {
            fatorial *= j;
        }
        sum += (1.0 / fatorial);
    }
    printf("E = %f", sum);
    return 0;
}
