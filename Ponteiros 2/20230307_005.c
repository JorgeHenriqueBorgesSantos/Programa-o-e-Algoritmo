#include <stdio.h>
#include <stdlib.h>

void Ordenar(int Lis[]){
    int aux;
    int *k, *p, *z;

    k = &Lis[0];
    p = &Lis[1];
    z = &Lis[2];

    if (*k > *p){
        aux = *k;
        *k = *p;
        *p = aux;
    }

    if (*k > *z){
        aux = *k;
        *k = *z;
        *z = aux;
    }

    if (*p > *z){
        aux = *p;
        *p = *z;
        *z = aux;
    }
}

int main()
{
    int Tv_Br[3];
    int *Domingao;
    int Faustao;

    for (Domingao = &Tv_Br[0]; Domingao <= &Tv_Br[2]; Domingao++){
        printf("Deh um numero: ");
        scanf("%d", &Faustao);
        *Domingao = Faustao;
    }

    Ordenar(Tv_Br);

    for (Domingao = &Tv_Br[0]; Domingao <= &Tv_Br[2]; Domingao++){
        printf("%d ", *Domingao);
    }
}
