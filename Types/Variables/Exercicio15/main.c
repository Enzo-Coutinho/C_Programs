#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int n;
    float f;
    scanf("%c %d %f", &c, &n, &f);
    printf("%c %d %.2f \n", c, n, f);
    printf("%c\t%d\t%.2f \n", c, n, f);
    printf("%c\n%d\n%.2f", c, n, f);
    return 0;
}
