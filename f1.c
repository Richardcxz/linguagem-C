#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
int y=0,i,xx=1,ae[10],soma=0,ao=0,rep=0;

do{
printf("ESCOLHA UMA OPCAO\n");
printf("1-GERAR UM NUMERO\n");
printf("2-MOSTRAR SOMA DOS VALORES GERADOS\n");
scanf("%d",&xx);

if(xx==1){
rep++;
for(i=rep;i<=rep;i++){
srand(time(NULL));
ae[i]=rand() % 100;
ao==ae[i];

printf("NUMERO GERADO: %d\n",ae[i]);
printf("-------------------\n");
}}
if(xx==2){
for(i=0;i<=rep;i++){
soma==soma+ae[i];
}
printf("SOMA DOS VALORES: %d",soma);
y++;
}
}while(y==0);
return(0);
}