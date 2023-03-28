#include <stdio.h>
#include <stdlib.h>

double **locadora(int f, int c){
    double **m;
    int i,j;

    m = (double**)malloc(f * sizeof(double*));

    for (i=0;i<f;i++){
        *(m+i) = (double *) malloc (c* sizeof(double));
    }

    for (i=0;i<f;i++){
        for (j=0;j<c;j++){
            printf("Valor em %d,%d: ", i, j);
            scanf("%lf", (*(m+i)+j));
        }
    }
    return m;
}

int main()
{
    int n,m,i,j;

    double** m1;
    double** m2;
    double** soma;

    printf("Informacoes das Matrizes\n");
    printf("Num. de linhas: ");
    scanf("%d", &m);
    printf("Num. de colunas: ");
    scanf("%d", &n);

    printf("Primeira Matriz:\n");
    m1 = locadora(m,n);

    printf("Primeira Matriz:\n");
    m2 = locadora(m,n);

    printf("A soma delas eh:\n");
    soma = (double**) malloc(m * sizeof(double*));

    for (i=0;i<m;i++){
        *(soma + i) = (double*)malloc(n * sizeof(double));
     }

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            (*(*(soma+i)+j)) = (*(*(m1+i)+j))+(*(*(m2+i)+j));
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("\nValor em %d,%d eh %lf", i, j, *(*(soma+i)+j));
        }
    }

    free(m1);
    free(m2);
    free(soma);
}
