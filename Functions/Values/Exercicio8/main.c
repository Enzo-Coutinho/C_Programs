#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isSquare(float b)
{
    int a = (int)sqrt(b);

    return pow(a, 2) == b ? 1 : 0;

}

int main()
{
    int value;
    scanf("%d", &value);

    int is_square = isSquare(value);

    if(is_square)
        printf("Is a perfect square");
    else
        printf("Nothing a perfect square");

    return 0;
}
