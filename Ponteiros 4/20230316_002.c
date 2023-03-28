#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    int l,c;

    a = (int **) malloc (2 * sizeof(int *));

    for (l=0; l<2; l++){
        *(a+l) = (int *) malloc (3 * sizeof(int));
    }

    for (l=0; l<2; l++){
        for (c=0;c<3;c++){
            printf("\n Valor para %d,%d: ", l, c);
            scanf("%d", (*(a+l)+c));
        }
    }

    for (l=0; l<2; l++){
        for (c=0;c<3;c++){
            printf(" Valor em %d,%d eh %d", l, c, *(*(a+l)+c));
            printf("\nValor em %d,%d eh %d", l, c, a[l][c]);
        }
    }

    for (l=0;l<2;l++){
        free(*(a+l));
    }

    free(a);
}
