#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char mensagem[30];
    int qtdOfVogal = 0;
    printf("Digite uma mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    char caracter;
    printf("Digite um caractere: ");
    scanf("%c", &caracter);
    for(int i=0; i<strlen(mensagem); i++)
    {
        if(mensagem[i] == 'a')
        {
            mensagem[i] = caracter;
            qtdOfVogal++;
        }
        if(mensagem[i] == 'e')
        {
            mensagem[i] = caracter;
            qtdOfVogal++;
        }
        if(mensagem[i] == 'i')
        {
            mensagem[i] = caracter;
            qtdOfVogal++;
        }
        if(mensagem[i] == 'o')
        {
            mensagem[i] = caracter;
            qtdOfVogal++;
        }
        if(mensagem[i] == 'u')
        {
            mensagem[i] = caracter;
            qtdOfVogal++;
        }
    }
    fputs(mensagem, stdout);
    return 0;
}
