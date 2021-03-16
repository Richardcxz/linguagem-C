#include <stdio.h>
#include <stdlib.h>

int main () {
     float A, B, X;

     printf("\nDIGITE O VALOR DE A: \t");
     scanf("%f", &A);
     if(A < 0) {
     printf("\n VALOR INVALIDO!\t");
     printf("\n DIGITE O VALOR DE A: \t");
     scanf("%f", &A);
     }
          printf("\nDIGITE O VALOR DE B: \t");
     scanf("%f", &B);
     if(B < 0) {
     printf("\n VALOR INVALIDO!\t");
     printf("\n DIGITE O VALOR DE B: \t");
     scanf("%f", &B);
     }
     X = A+B;

     printf("\n SOMA DOS VALORES: %f", X);

     return 0;
     }
