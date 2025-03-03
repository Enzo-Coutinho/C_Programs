#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    scanf("%d", &value);
    if(!(value % 2))
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}
