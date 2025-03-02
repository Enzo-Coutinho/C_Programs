#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual, idade;
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Sua idade eh: ");
    scanf("%d", &idade);
    printf("Voce nasceu em: %d", anoAtual - idade);
    return 0;
}
