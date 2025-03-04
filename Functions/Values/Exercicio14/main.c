#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int f = 1;
    for(int i=1; i<=n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("O fatorial eh: %d", fatorial(n));

    return 0;
}
