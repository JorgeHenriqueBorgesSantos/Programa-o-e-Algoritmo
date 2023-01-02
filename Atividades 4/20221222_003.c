#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, Mpar=0, Mimpar=0, holder=0;

    while (holder == 0){
        printf("Diga um numero: ");
        scanf("%d", &num);

        if (num < 0){
            printf("Insira valores positivos\n");
            continue;
        }

        if (num > 1000){
            break;
        }

        if ((num % 2) == 0){
            Mpar += num;
        }
        else{
            Mimpar += num;
        }
    }
    printf("A soma dos pares eh %d\n", Mpar);
    printf("A soma dos impares eh %.d", Mimpar);
}
