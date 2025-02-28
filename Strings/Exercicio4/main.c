#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[30];
    printf("Digit a string: ");
    fgets(str, 30, stdin);
    for(int i=strlen(str); i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
