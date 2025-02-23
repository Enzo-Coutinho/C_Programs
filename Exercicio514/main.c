#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    printf("%d \n %d \n", a, b);
    for(int i = 0; i<=n; i++)
    {
        b += a;
        a = b;
        printf("%d \n", b);

    }
    return 0;
}
