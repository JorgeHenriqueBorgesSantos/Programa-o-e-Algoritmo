#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2, N3, N4, Media;

    printf("Diga a nota 1: ");
    scanf("%d", &N1);

    printf("Diga a nota 2: ");
    scanf("%d", &N2);

    printf("Diga a nota 3: ");
    scanf("%d", &N3);

    printf("Diga a nota 4: ");
    scanf("%d", &N4);

    Media = (N1 + N2 + N3 + N4) / 4;

    if (Media >= 8){
        printf("Aluno passou de ano com %d pontos.", Media);
    }
    else{
        printf("Aluno se lascou com %d pontos.", Media);
    }
    return 0;
}
