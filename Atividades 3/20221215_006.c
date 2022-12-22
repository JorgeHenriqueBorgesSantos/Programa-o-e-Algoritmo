#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Renda, Horas, Salario;

    printf("De o quanto voce ganha por hora: ");
    scanf("%f", &Renda);

    printf("Diga quantas horas trabalhou este mes: ");
    scanf("%f", &Horas);

    Salario = Renda * Horas;

    printf("O salario ganho neste mes eh de R$ %.2f", Salario);
    return 0;
}
