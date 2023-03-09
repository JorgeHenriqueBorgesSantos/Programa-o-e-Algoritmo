#include <stdio.h>
#include <stdlib.h>


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

    for (Domingao = &Tv_Br[0]; Domingao <= &Tv_Br[2]; Domingao++){
        printf("%d ", *Domingao);
    }
}
