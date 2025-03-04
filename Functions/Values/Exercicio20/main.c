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

double neperNumber(int n)
{
    double e = 0;
    for(int i=0; i<=n; i++)
    {
        e += (1.0/(double)fatorial(i));
    }
    return e;
}

int main()
{
    int value;
    scanf("%d", &value);

    printf("The e number is: %lf", neperNumber(value));

    return 0;
}
