#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Alt, Peso;

    printf("Introduza sua altura em metros: ");
    scanf("%f", &Alt);

    Peso = (72.7 * Alt) - 58;

    printf("Seu peso ideal eh %.2f kg.", Peso);
    return 0;
}
