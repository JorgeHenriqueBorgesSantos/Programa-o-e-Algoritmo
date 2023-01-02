#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont, soma=0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(cont=1; cont < num; cont++){

        if ((num % cont) == 0){
            soma += cont;
        }
    }

    if(soma == num){
        printf("%d eh perfeito", num);
    }
    else{
        printf("%d nao eh perfeito", num);
    }


}
