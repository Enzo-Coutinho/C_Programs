#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("Digit two numbers: ");
    scanf("%f %f", &n1, &n2);

    setbuf(stdin, NULL);

    char oper;
    printf("Digit a operator +, -, *, /: ");
    scanf("%c", &oper);

    float result;
    switch(oper)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    }

    printf("The result is: %f", result);
    return 0;
}
