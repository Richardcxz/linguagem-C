#include <stdio.h>

void main(){
int acm=0,med,icms[100],x,uni[100],kwhant[100],kwhat[100],casas;
int fornec=0,unoo=0,doiss=0,tress=0,quaa=0;
float total=0,som[100],ckwh=0.15,luc,cst=0,uno=0.291,dois=0.362,tres=0.401,qua=0.432;

printf("Qual a quantidade de casas da cidade?\n");
scanf("%d",&casas);
for(x=0;x<=casas-1;x++){
unoo=0; doiss=0; tress=0; quaa=0;
printf("Qual o codigo da unidade consumidora? (ex: 01234567)\n");
scanf("%d",&uni[x]);
printf("Qual foi a leitura anterior de kWh da casa?\n");
scanf("%d",&kwhant[x]);
printf("Qual e a leitura atual de kWh da casa?\n");
scanf("%d",&kwhat[x]);
fornec=fornec+kwhat[x];
if(kwhat[x]>=100){
unoo++;
}
if(kwhat[x]<=101 && kwhat[x]<=250){
doiss++;
}
if(kwhat[x]>=251 && kwhat[x]<=400){
tress++;
}
if(kwhat[x]>400){
quaa++;
}
/*---------------------------*/
if(unoo>0){
som[x]=kwhat[x]*uno;
icms[x]=som[x]/4;
som[x]=som[x]+icms[x];
total=total+som[x];
}
if(doiss>0){
som[x]=kwhat[x]*dois;
icms[x]=som[x]/4;
som[x]=som[x]+icms[x];
total=total+som[x];
}
if(tress>0){
som[x]=kwhat[x]*tres;
icms[x]=som[x]/4;
som[x]=som[x]+icms[x];
total=total+som[x];
}
if(quaa>0){
som[x]=kwhat[x]*qua;
icms[x]=som[x]/4;
som[x]=som[x]+icms[x];
total=total+som[x];
}
}
cst=ckwh*fornec;
med=fornec/casas;
for(x=0;x<=casas-1;x++){
if(kwhat[x]>med){
acm++;
}
}
luc=total-cst;
printf("Valor total das contas de luz da cidade: R$%.2f\n",total);
printf("Quantidade de energia fornecida: %d kWh\n",fornec);
printf("Casas que consomem acima da media: %d\n",acm);
printf("Lucro da ACME: R$%.2f\n",luc);
}