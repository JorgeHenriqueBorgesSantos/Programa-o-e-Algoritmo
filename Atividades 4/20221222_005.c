#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, den = 1;
    float soma=0;

    for(num=1; num <100 ; num+=2){
        soma += num / den;
        den += 1;
    }
    printf("%.2f", &soma);
}
