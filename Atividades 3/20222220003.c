#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, soma=0;

    for(cont=1; cont<=50; cont++){
        printf("Diga um numero:");
        scanf("%d", &num);
        if (num%2 != 0 && 100<num<200){
            soma += num;
        }
    }
    printf("a soma dos impares eh %d", soma);
}
