#include <stdio.h>
#include <stdlib.h>

void Diag_P(int a[5][5]);
void Diag_S(int a[5][5]);
void Soma4(int a[5][5]);
void Soma2(int a[5][5]);
void No_Diag_P(int a[5][5]);


int main()
{
    int m1[5][5]={{8, 5, 3, 2, 1}, {1, 2, 3, 4, 5}, {7, 8, 9, 10, 1}, {5, 3, 3, 3, 4}, {2, 1, 9, 5, 6}};
    int fil, col;

    Diag_P(m1);
    printf("\n");

    Diag_S(m1);
    printf("\n");

    Soma4(m1);
    printf("\n");

    Soma2(m1);
    printf("\n");

    No_Diag_P(m1);
}

void Diag_P(int a[5][5]){
    int fila, coluna;

    printf("A Diagona Principal eh: ");

    for (fila=0;fila < 5;fila++){
        for (coluna=0;coluna < 5; coluna++){
            if(fila == coluna){
                printf("%d ", a[fila][coluna]);
            }
        }
    }
}

void Diag_S(int a[5][5]){
    int fila, coluna, z;

    printf("A Diagona Secundaria eh: ");

    for (fila=0;fila < 5;fila++){
        for (coluna=0;coluna < 5; coluna++){
            z = fila + coluna;
            if(z == 4){
                printf("%d ", a[fila][coluna]);
            }
        }
    }
}

void Soma4(int a[5][5]){
    int fila, coluna, z = 0;

    for (fila=0;fila < 5;fila++){
        for (coluna=0;coluna < 5; coluna++){
            if (2 < fila && fila < 4){
                z += a[fila][coluna];
            }
            else {continue;}
        }
    }

    printf("A soma da linha 4 eh %d", z);
}

void Soma2(int a[5][5]){
    int fila, coluna, z = 0;

    for (fila=0;fila < 5;fila++){
        for (coluna=0;coluna < 5; coluna++){
            if (0 < coluna && coluna < 2){
                z += a[fila][coluna];
            }
            else {continue;}
        }
    }
    printf("A soma da coluna 2 eh %d", z);
}

void No_Diag_P(int a[5][5]){
    int fila, coluna;

    printf("A Matriz sem DP eh: \n");

    for (fila=0;fila < 5;fila++){
        for (coluna=0;coluna < 5; coluna++){
            if(fila == coluna){
                printf(" ");
            }
            else{
                printf("%d ", a[fila][coluna]);
            }
        }
        printf("\n");
    }
}
