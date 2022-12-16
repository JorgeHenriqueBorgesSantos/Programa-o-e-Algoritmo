#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, Ope_1;
    float C, Ope_2, Ope_3;

    printf("De um numero: ");
    scanf("%d", &A);

    printf("De outro numero: ");
    scanf("%d", &B);

    printf("De so mais um, por favor: ");
    scanf("%f", &C);

    Ope_1 = ((B / 2) * (2 * A));

    Ope_2 = (3 * A) + C;

    Ope_3 = C * C * C;

    printf("O resultado de  2A * B/2 eh: %d\n", Ope_1);
    printf("O resultado de  3A + C eh: %.2f\n", Ope_2);
    printf("O resultado de  C^3 eh: %.2f\n", Ope_3);
    return 0;
}
