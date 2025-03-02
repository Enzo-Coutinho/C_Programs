#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char n, com;
    scanf("%d", &n);
    com = ~n;
    printf("~x = %d \n", com);
    return 0;
}
