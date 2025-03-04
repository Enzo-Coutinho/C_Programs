#include <stdio.h>
#include <stdlib.h>

void mes(int n)
{
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

    }
}

int main()
{
    int n;
    scanf("%d", &n);
    mes(n);
    return 0;
}
