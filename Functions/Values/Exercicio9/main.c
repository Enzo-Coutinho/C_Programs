#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3, char m)
{
    switch(m)
    {
    case 'A':
        {
            return (n1 + n2 + n3) / 3.0;
        }
    case 'P':
        {
            return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 3.0;
        }
    default:
        return -1;
    }
}
int main()
{
    float n1, n2, n3;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    setbuf(stdin, NULL);

    char formaMedia;
    printf("Media aritmetica (A) ou media ponderada(P): ");
    scanf("%c", &formaMedia);

    float med = media(n1, n2, n3, formaMedia);

    printf("A media eh: %f", med);

    return 0;
}
