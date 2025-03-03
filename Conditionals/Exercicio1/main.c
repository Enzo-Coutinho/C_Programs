#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    n1 = n1 >= n2 ? n1 : n2;
    printf("The max value is: %d", n1);
    return 0;
}
