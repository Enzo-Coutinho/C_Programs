#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, emprestimo;
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &emprestimo);
    if(emprestimo > (salario * (20.0 / 100.0)))
        printf("Emprestimo recusado");
    else
        printf("Emprestimo concebido");
    return 0;
}
