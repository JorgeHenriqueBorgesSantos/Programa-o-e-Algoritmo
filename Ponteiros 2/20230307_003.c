#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Piracanjuba=30;
    float TvMaresol=20.6;
    char Catuiba='e';

    int *Lacta;
    float *Recooooo;
    char *Corote;

    Lacta = &Piracanjuba;
    Recooooo = &TvMaresol;
    Corote = &Catuiba;

    printf("%d \n", *Lacta);
    printf("%f \n", *Recooooo);
    printf("%c \n", *Corote);

    Piracanjuba = 5;
    TvMaresol = 23.00009;
    Catuiba = 'Z';


    printf("%d \n", *Lacta);
    printf("%f \n", *Recooooo);
    printf("%c \n", *Corote);
}
