#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value = 780000.0F;
    float g1, g2, g3;
    g1 = value * (46.0/100.0);
    g2 = value * (32.0/100.0);
    g3 = value * (22.0/100.0);
    printf("Winner 1: RS%.2f \n", g1);
    printf("Winner 2: RS%.2f \n", g2);
    printf("Winner 3: RS%.2f \n", g3);
    return 0;
}
