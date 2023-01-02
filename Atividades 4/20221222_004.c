#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, mark=0;

    printf("De um numero: ");
    scanf("%d", &num);

    for (cont=2; cont<num; cont++){

        if ((num % cont) == 0){
            mark += 1;
        }
        else{
            continue;
        }
    }

    if (mark == 1){
        printf("O numero %d nao eh primo", num);
    }
    else{
        printf("O numero %d eh primo", num);
    }
}
