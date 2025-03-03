#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite a idade de um nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7)
        printf("Categoria infantil A");
    if(idade >= 8 && idade <= 10)
        printf("Categoria infantil B");
    if(idade >= 11 && idade <= 13)
        printf("Categoria Juvenil A");
    if(idade >= 14 && idade <= 17)
        printf("Categoria Juvenil B");
    if(idade >= 18)
        printf("Senior");
    return 0;
}
