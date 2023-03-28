#include <stdio.h>
#include <stdlib.h>

int *Vetorizacao(int tam){
    int hol;
    int * vitor = (int *) malloc (tam * sizeof(int));

    for (hol=0; hol<tam; hol++){
        printf("\nValor na posicao %d: ", hol);
        scanf("%d", (vitor+hol));
    }

    return vitor;
}

void Maior_Menor(int larg, int *a, int *b, int * vet){
    int baixo = *(vet + 0), alto = 0, cont;

    for (cont=0; cont < larg; cont++){
        if (baixo > *(vet + cont)){baixo = *(vet + cont);}

        if (alto < *(vet + cont)){alto = *(vet + cont);}
    }

    *a = alto;
    *b = baixo;
}

int main()
{
    int comprimento, maior=0, menor=0;
    int * veterinario;

    printf("Deh o tamanh do vetor: ");
    scanf("%d", &comprimento);

    veterinario = Vetorizacao(comprimento);

    Maior_Menor(comprimento, &maior, &menor, veterinario);

    printf("O maior elemento eh %d e o menor eh %d", maior, menor);

    free(veterinario);
}
