#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("Digit your height (m): ");
    scanf("%f", &height);

    setbuf(stdin, NULL);

    char sexo;
    printf("Male (M) ou Female (F): ");
    scanf("%c", &sexo);

    float idealWeight = 0;

    if(sexo = 'M')
        idealWeight = (72.7 * height) - 58;
    else
        idealWeight = (62.1 * height) - 44.7;

    printf("Your ideal weight is: %.2f", idealWeight);

    return 0;
}
