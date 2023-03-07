#include <stdio.h>
#include <stdlib.h>

void Func(float* a, float* b){
    for (a; a <= b; a++){
        printf("%f \n", *a);
    }
}

int main()
{
    float vet1[4] = {1.1, 2.2, 34.0, 20.4567};
    float vet2[5] = {5.9, 0.0009, 5.7, 1234.456, 5.7777779};
    float vet3[9] = {12.5666666, 678900.000002, 12.9, 999.000001, 45.6, 123.0987, 34.8, 90.123, 678.49017364};

    Func(&vet1[0], &vet1[3]);
    Func(&vet2[0], &vet2[4]);
    Func(&vet3[0], &vet3[8]);
}
