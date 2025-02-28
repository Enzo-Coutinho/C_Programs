#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght = 0;
    char str[30];
    printf("Digit a string: ");
    fgets(str, 30, stdin);
    for(int i = 0; str[i] != '\0'; i++)
        lenght++;
    printf("The lenght of string is: %d", lenght);
    return 0;
}
