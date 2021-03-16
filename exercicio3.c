#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
int cp;
float pe, ta, tb, tt;

printf("Informe o preco do produto: ");
scanf("%f", &pe);
printf("1 - a vista no dinheiro, 10 porcento de desconto. \n");
printf("2 - a vista no credito, 5 porcento de desconto. \n");
printf("3 - 2 vezes sem juros. \n");
printf("4 - 3 vezes com acrescimo de 10 porcento. \n");
scanf("%d", &cp);
switch(cp){
case 1:
tt=pe-(pe*0.1);
printf("O valor a vista sera de R$%f\n", tt);
break;
case 2:
tt=pe-(pe*0.05);
printf("O valor a vista no credito sera de R$%f\n", tt);
break;
case 3:
tt=pe/2;
printf("O valor parcelado em duas vezes sem acrescimo sera de R$%f\n", tt);
break;
case 4:
ta=pe*0.1;
tb=pe+ta;
tt=tb/3;
printf("O valor parcelado em tres vezes com acrescimo de 10 porcento sera de  R$%f\n", tt);
break;
}
return 0;
}
