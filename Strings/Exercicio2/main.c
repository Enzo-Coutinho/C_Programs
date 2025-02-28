#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    printf("Ditig a string: ");
    fgets(str, 30, stdin);
    for(int i=0; i<5; i++)
        printf("%c", str[i]);
    return 0;
}
