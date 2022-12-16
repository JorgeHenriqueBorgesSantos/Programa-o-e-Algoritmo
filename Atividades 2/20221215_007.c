#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Celsius, Farenheit;

    printf("De a temperatura em graus F: ");
    scanf("%d", &Farenheit);

    Celsius = (5 * (Farenheit-32) / 9);

    printf("A temperatura dada eh de %d graus Celsius", Celsius);
    return 0;
}
