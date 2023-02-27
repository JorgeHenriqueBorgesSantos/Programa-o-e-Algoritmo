#include <stdio.h>
#include <stdlib.h>

void Mult_Escalar(int a[3][3], int escalar, int out[3][3]){
    int fila, coluna;

    for (fila=0;fila < 3;fila++){
        for (coluna=0;coluna < 3; coluna++){
            out[fila][coluna] = a[fila][coluna] * escalar;
        }
    }
}

int main()
{
    int m1[3][3]={{3, 3, 3}, {4, 4, 4}, {5, 5, 5}};
    int resul[3][3];
    int fila, coluna;

    Mult_Escalar(m1, 3, resul);

    for (fila=0;fila < 3;fila++){
        printf("\n");
        for (coluna=0;coluna < 3;coluna++){
            printf("%d ", resul[fila][coluna]);
        }
    }
}
