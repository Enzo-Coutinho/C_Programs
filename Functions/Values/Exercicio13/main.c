#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int value;
    scanf("%d", &value);

    printf("The sum is: %d", sum(value));
    return 0;
}
