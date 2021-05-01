#include <stdio.h>
#include <stdlib.h>

int main () {
    float A1, B2, C3;

    printf("Digite o valor de A: \n");
    scanf("%f", &A1);

    printf("Digite o valor de B: \n");
    scanf("%f", &B2);

    printf("Digite o valor de C: \n");
    scanf("%f", &C3);

    if(A1>B2 && A1>C3) {
        printf("O maior numero eh %f", A1);
    }



    return (0);
}
