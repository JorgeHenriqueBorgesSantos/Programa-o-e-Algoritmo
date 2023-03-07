#include <stdio.h>
#include <stdlib.h>

void Pet_e_Repet(int* a, int* b){
    int cont=0;

    for (a; a<=b; a++){
        if (*a == 3){
            printf("%d \n", a);
            cont++;
        }
    }

    if (cont == 0){
        printf("NULL");
    }
}

int main()
{
    int VeetorAhEh[10] = {3, 22, 45, 0, 3, 12, 44, 23, 3, 90};

    Pet_e_Repet(&VeetorAhEh[0], &VeetorAhEh[9]);
}
