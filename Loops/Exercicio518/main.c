#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int div = 1;
    for(int i=2; i<n; i++)
    {
        if(!(n % i))
        {
            div = 0;
            printf("Not prime");
            break;
        }
    }
    if(div)
    {
        printf("This number is prime");
    }
    return 0;
}
