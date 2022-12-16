#include <stdio.h>
#include <stdlib.h>

int main()
{
    #define Pi 3.14
    int Raio;
    float Area;

    printf("De o raio do circulo: ");
    scanf("%d", &Raio);

    Area = Pi * (Raio * Raio);

    printf("A Area resultante eh %.2f", Area);
    return 0;
}
