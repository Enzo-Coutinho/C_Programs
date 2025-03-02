#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("n x 2 = %d \n", n << 1);
    printf("n / 2 = %d", n >> 1);
    return 0;
}
