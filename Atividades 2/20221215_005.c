#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Lado, Area, Dobrado;

    printf("De o tamanho do lado: ");
    scanf("%f", &Lado);

    Area = Lado * Lado;

    Dobrado = Area * 2;

    printf("O dobro da Area do quadrado eh %.2f", Dobrado);
    return 0;
}
