#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float num, maior=0, menor;

    for(cont=1; cont<=15; cont++){
        printf("Diga um numero: ");
        scanf("%f", &num);
        if (cont == 1){
            menor = num;
        }
        if (num > maior){
            maior = num;
        }
        if (num < menor){
            menor = num;
        }
    }
    printf("o maior eh %.2f\n", maior);
    printf("o menor eh %.2f", menor);
}
