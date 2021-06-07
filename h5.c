#include <stdio.h>
#include <math.h>
void main(){
char m[50];
int fin, par, jur, x, y, zz;
float z;

printf("Modelo do carro:");
gets(m);
printf("Valor a ser financiado:");
scanf("%d",&fin);
printf("Numero de parcelas:");
scanf("%d",&par);
printf("Taxa de juros:");
scanf("%d",&jur);
z=jur*0.01;
zz=fin*z;
for(x=0;x<=par;x++){
y=fin+zz;
}
x=y/par;
printf("Modelo do carro: %s\n",m);
printf("Valor financiamento R$%d\n",y);
printf("Valor de cada uma das %d parcelas: %d\n",par,x);
}
