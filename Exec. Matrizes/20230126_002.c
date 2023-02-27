#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void Soma_NxN(int a[MAX][MAX], int b[MAX][MAX], int Fa, int Ca, int Fb, int Cb){
    int fila, coluna;

    if (Fa != Fb || Ca != Cb){
        printf("As matrizes nao sao de mesma ordem");
        return;
    }

    for (fila=0;fila < Fa;fila++){
        printf("\n");
        for (coluna=0;coluna < Ca; coluna++){
            printf("%d ", a[fila][coluna]+b[fila][coluna]);
        }
    }
}

int main()
{
    int m1[MAX][MAX]={{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}, {5, 5, 5}};
    int m2[MAX][MAX]={{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}, {5, 5, 5}};

    Soma_NxN(m1, m2, 5, 3, 5, 3);
}
