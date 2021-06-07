#include <stdio.h>

void main(){
int x,qnt=0,ida[10],med=0,med1=0,nt,idoso=0,otm=0,reg=0,ruim=0,pess=0;

for(x=1;x<=10;x++){
printf("Digite a idade do espectador %d:\n",x);
scanf("%d",&ida[x]);
if(ida[x]>65){
idoso++;
}
printf("Digite a nota do espectador %d:\n",x);
scanf("%d",&nt);
if(nt==5){
otm++;
}
if(nt==3){
reg++;
}
if(nt==2){
ruim++;
qnt++;
med=med+ida[x];
}}
med1=med/qnt;
printf("Quantidade de pessoas que acharam o filme otimo: %d\n",otm);
printf("Quantidade de pessoas que acharam o filme regular: %d\n",reg);
printf("Media de idade das pessoas que acharam o filme ruim: %d\n",med1);
printf("Quantidade de pessoas com idade acima de 65 anos: %d\n",idoso);
}