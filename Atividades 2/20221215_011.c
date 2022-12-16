#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Renda, Horas, Sal_Bruto, IP_Renda, Sindicato, INSS, Descontos, Sobra;

    printf("De o quanto voce ganha por hora: ");
    scanf("%f", &Renda);

    printf("Diga quantas horas trabalhou este mes: ");
    scanf("%f", &Horas);

    Sal_Bruto = Renda * Horas;

    IP_Renda = Sal_Bruto * 0.11;

    INSS = Sal_Bruto * 0.08;

    Sindicato = Sal_Bruto * 0.05;

    Descontos = IP_Renda + INSS + Sindicato;

    Sobra = Sal_Bruto - Descontos;

    printf("Seu salario bruto foi de R$ %.2f\n", Sal_Bruto);
    printf("No total, R$ %.2f foram para o INSS.\n", INSS);
    printf("No total, o Sindicato tomou R$ %.2f de voce.\n", Sindicato);
    printf("No fim, seu salario liquido eh de R$ %.2f.\n", Sobra);
    return 0;
}
