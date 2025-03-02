#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    printf("Digite uma temperatura: ");
    scanf("%f", &celsius);
    float fahr = ((celsius * (9.0/5.0)) + 32.0);
    printf("O valor em fahrenheit eh: %f", fahr);
    return 0;
}
