#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[30];
    char invertedStr[30];
    printf("Digit a string: ");
    fgets(str, 30, stdin);
    int j = 0;
    for(int i=strlen(str); i >= 0; i--)
    {
        invertedStr[j] = str[i];
        j++;
    }
    invertedStr[strlen(str)+1] = '\0';
    printf("Inverted text: %s", invertedStr);
    return 0;
}
