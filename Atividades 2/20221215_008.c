#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Celsius, Farenheit;

    printf("De a temperatura em graus C: ");
    scanf("%d", &Celsius);

    Farenheit = ((Celsius * 9)/5) + 32;

    printf("A temperatura dada eh de %d graus Farenheit", Farenheit);
    return 0;
}
