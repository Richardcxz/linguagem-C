#include <stdio.h>
#include <stdlib.h>

int main () {
     float A1,B2,C3,X,X2;

    printf("\tEscolha Real(1) ou Dolar(2)\n");
    scanf("%f", &A1);

    if(A1<2) {
    printf ("\tReal Escolhido\n");
    printf("\tAgora digite o valor atual do dolar: \n");
    scanf("%f", &A1);
    printf("\tValor do dolar eh R$ %f \n", A1);

    if (A1>0) {
    printf("\t Agora digite o valor em real que deseja converter para dolar: \n");
    scanf("%f", &B2);

    X=A1*B2;

    printf("\tO valor convertido para dolar totaliza: $%f", X);
    }

    }

    else{
    printf ("\tDolar Escolhido\n");
    }
