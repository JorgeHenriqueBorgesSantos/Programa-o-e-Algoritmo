#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, maior=0, menor;

    for(cont=1; cont<=20; cont++){
        printf("Diga um numero:");
        scanf("%d", &num);
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
    printf("o maior eh %d\n", maior);
    printf("o menor eh %d", menor);
}
