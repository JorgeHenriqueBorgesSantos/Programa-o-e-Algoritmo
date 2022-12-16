#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Metros, Centimetros;

    printf("De um tamanho em metros: ");
    scanf("%d", &Metros);

    Centimetros = Metros * 100;

    printf("A conversao de %d Metros eh %d Centimetros", Metros, Centimetros);
    return 0;
}
