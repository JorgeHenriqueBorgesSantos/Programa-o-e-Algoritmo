#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  h, min, seg, tempo=0;
    float massIn, massFin;

    printf("Digite a massa (em g): ");
    scanf("%f", &massIn);

    massFin = massIn;

    do{
        massFin /= 2;
        tempo += 50;
    } while(massFin > 0.5);

    h = tempo / 3600;
    min = (tempo % 3600) / 60;
    seg = (tempo % 3600) % 60;

    printf("Massa Inicial: %.2f\n", massIn);
    printf("Massa Final: %.2f\n", massFin);
    printf("Levou um total de %d : %d : %d", h, min, seg);
}
