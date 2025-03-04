#include <stdio.h>
#include <stdlib.h>

float toCelsius(float fahr)
{
    return (fahr - 32.0) * (5.0/9.0);
}

int main()
{
    float fahren;
    scanf("%f", &fahren);

    float celsius = toCelsius(fahren);

    printf("%f", celsius);

    return 0;
}
