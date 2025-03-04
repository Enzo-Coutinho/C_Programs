#include <stdio.h>
#include <stdlib.h>

float operacao(float a, float b, char oper)
{
    float z = -1;
    switch(oper)
    {
        case '+':
            z = a + b;
            break;
        case '-':
            z = a - b;
            break;
        case '*':
            z = a * b;
            break;
        case '/':
            z = a / b;
            break;
    }
    return z;
}

int main()
{
    float n1, n2;
    printf("Digit two numbers: ");
    scanf("%f %f", &n1, &n2);

    setbuf(stdin, NULL);

    char op;
    printf("Digit an operator: ");
    scanf("%c", &op);

    float resultado = operacao(n1, n2, op);

    printf("The result is: %f", resultado);


    return 0;
}
