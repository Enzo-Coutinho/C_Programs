#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digit a number: ");
    scanf("%d", &n);

    switch(n)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    }

    return 0;
}
