#include <stdio.h>
#include <stdlib.h>

int main () {
     float A, B, X;

     printf("Deseja saber a temperatura em Celsius ou Fahrenheit? \n");
     printf("1-Celsius \n");
     printf("2-Fahrenheit \n");
     scanf("%f", &A);

     if(A<=1){
        printf("Agora digite a temperatura em Fahrenheit: \n");
        scanf("%f", &B);

        X=(B-32)/1.8;

        printf("O valor convertido de Fahrenheit para Celsius e %f", X);
     }

     else if(A>=2){
        printf("Agora digite a temperatura em Celsius: \n");
        scanf("%f", &B);

        X=(9/5)*B+32;

        printf("O valor convertido de Celsius para Fahrenheit e %f", X);
     }

     return 0;
     }
