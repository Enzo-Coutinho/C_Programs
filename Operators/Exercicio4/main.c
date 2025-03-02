#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f1, f2, f3, f4;
    scanf("%f %f %f %f", &f1, &f2, &f3, &f4);
    float media = (f1 + f2 + f3 + f4)/4;
    printf("A media eh: %f", media);
    return 0;
}
