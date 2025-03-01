#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int hora, min, seg;
} Hora;

int main()
{
    Hora horarios[5];
    int greaterHour = 0;
    for(int i=0; i<5; i++)
    {
        printf("Digite a hora: ");
        scanf("%d", &horarios[i].hora);
        printf("Digite os minutos: ");
        scanf("%d", &horarios[i].min);
        printf("Digite os segundos: ");
        scanf("%d", &horarios[i].seg);
        if(horarios[i].hora > greaterHour)
        {
            greaterHour = horarios[i].hora;
        }
    }
    printf("A maior hora eh: %d \n", greaterHour);
    return 0;
}
