#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    printf("%d %d ", a, b);

    for(int i=2; i<=n; i++)
    {
        int next = a + b;
        a = b;
        b = next;

        printf("%d ", next);
    }

    return 0;
}
