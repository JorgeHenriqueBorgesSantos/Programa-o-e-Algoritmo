#include <stdio.h>
#include <stdlib.h>

void Soma_Matriz(int a[3][5], int b[3][5], int Fa, int Ca, int Fb, int Cb){
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
    int m1[3][5]={{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int m2[3][5]={{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int fil, col;

    printf("Passe os termos da Matriz 1.\n");
    for (fil=0;fil < 3; fil++ ){
        printf("\n");
        for (col=0;col < 3; col++){
            scanf("%d", &m1[fil][col]);
        }
    }

    printf("\n");

    printf("Passe os termos da Matriz 2.\n");
    for (fil=0;fil < 3; fil++ ){
        printf("\n");
        for (col=0;col < 3; col++){
            scanf("%d", &m2[fil][col]);
        }
    }

    printf("\n");

    Soma_Matriz(m1, m2, 5, 3, 5, 3);
}
