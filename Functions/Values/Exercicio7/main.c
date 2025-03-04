#include <stdio.h>
#include <stdlib.h>

int toSeconds(int hour, int min, int seg)
{
    return (hour * 3600) + (min * 60) + seg;
}

int main()
{
    int hour, min, seg;
    printf("Digite an hour: HH:mm:ss - ");
    scanf("%d:%d:%d", &hour, &min, &seg);

    int seconds = toSeconds(hour, min, seg);

    printf("The value in seconds is: %d", seconds);

    return 0;
}
