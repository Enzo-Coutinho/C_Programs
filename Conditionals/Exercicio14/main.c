#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Digit a number: ");
    scanf("%d", &n1);

    if((n1 % 5) || (n1 % 3))
    {
        if(!(n1 % 5))
            printf("Divisible by 5 \n");
        if(!(n1 % 3))
            printf("Divisible by 3 \n");
    }


    return 0;
}
