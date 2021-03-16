#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int resp, raio;
     float conta;

     printf("Qual o raio da circunferencia: ");
     scanf("%d%",&raio);

     if(raio>=1){
     printf("Escolha qual operacao ira fazer: \n");
     printf("1- Area da circunferencia \n");
     printf("2- Perimetro da circunferencia \n");
     scanf("%d",&resp);
     }
     switch(resp){
     case 1:
     conta=pow(raio,2)*3.14159265359;
     break;
     case 2:
     conta=2*3.14159265359*raio;
     break;
     }
     printf("O resultado da conta e: %f\n", conta);


     return 0;
     }
