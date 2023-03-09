#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Arraial[8];
    int *Comeco;
    int aux;

    for (Comeco = &Arraial[0]; Comeco <= &Arraial[7]; Comeco++){
        printf("Deh um numero: ");
        scanf("%d", &aux);
        *Comeco = aux;
        printf("%d \n", aux*2);
    }


    for (Comeco = &Arraial[0]; Comeco <= &Arraial[7]; Comeco++){
        if ((*Comeco % 2) == 0){
            printf("%d \n", Comeco);
        }
    }
}
