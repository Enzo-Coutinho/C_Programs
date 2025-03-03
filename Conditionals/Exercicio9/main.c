#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    char cla = 'A';
    if(peso >= 60 && peso <= 90)
        cla = 'D';
    if(peso > 90)
        cla = 'G';

    if(altura >= 1.2 && altura <= 1.7)
        cla += 1;
    if(altura > 1.7)
        cla += 2;

    printf("A classificao eh: %c", cla);

    return 0;
}
