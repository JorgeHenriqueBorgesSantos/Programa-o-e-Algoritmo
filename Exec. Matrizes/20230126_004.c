#include <stdio.h>
#include <stdlib.h>

void Achar(int a[3][3], int x){
    int fila, coluna;

    for (fila=0;fila < 3;fila++){
        for (coluna=0;coluna < 3; coluna++){
            if(a[fila][coluna] == x){
                printf("O numero %d esta na posicao %d,%d", x, fila+1, coluna+1);
                return;
            }
        }
    }

    printf("O numero nao se encontra na matriz.");
}

int main()
{
    int m1[3][3]={{9, 6, 1}, {5, 2, 4}, {3, 8, 7}};
    int num;

    printf("Diga um numero da matriz: ");
    scanf("%d", &num);

    Achar(m1, num);
}
