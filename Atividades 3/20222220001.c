#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, soma=0;

    for(cont=1; cont<=5; cont++){
        printf("Diga um numero:");
        scanf("%d", &num);
        soma += num;
    }
    printf("a soma eh %d", soma);
}
