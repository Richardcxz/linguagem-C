#include <stdio.h>
#include <math.h>

int main() {
unsigned long long int uniao = 000000000000;
unsigned long long int q2 = 999999999999;
unsigned long int w2 = 999999999;
unsigned long int e2 = 999999;
unsigned long int r2 = 999;
int ip[4]={0},i;
int q,w,e,r;
int a[99],ii,iip,bin,op,tab1=0,tab2=0,tab3=0,tab4=0,tab5=0;
printf("Digite um endereco de IP: \n");
setbuf(stdin,NULL);
scanf("%d%*c%d%*c%d%*c%d",&ip[0],&ip[1],&ip[2],&ip[3]);
printf("-------------------------------\n");
iip=ip[0];
q=ip[0];
w=ip[1];
e=ip[2];
r=ip[3];
q2=q*pow(10,9);
w2=w*pow(10,6);
e2=e*pow(10,3);
r2=r*pow(10,0);
uniao=uniao+q2+w2+e2+r2;
printf("Escolha o que fazer com %d.%d.%d.%d\n",ip[0],ip[1],ip[2],ip[3]);
printf("Opcao 1 Retornar na tela qual a classe que o IP pertence (conforme a tabela)\n");
printf("Opcao 2 Retornar na tela os octetos convertidos em binario\n");
printf("Opcao 3 Encerrar o programa\n");
printf("Escolha sua opcao: \n");
scanf("%d",&op);

if(op==1){
    if(iip>=1 && iip<=127){
    tab1++;
    }
    if(iip>=128 && iip<=191){
    tab2++;
    }
    if(iip>=192 && iip<=223){
    tab3++;
    }
    if(iip>=224 && iip<=239){
    tab4++;
    }
    if(iip>=240 && iip<=255){
    tab5++;
    }
    if(tab1>0){
    printf("Seu endereco de IP esta na tabela A.");
    }
    else if(tab2>0){
    printf("Seu endereco de IP esta na tabela B.");
    }
    else if(tab3>0){
    printf("Seu endereco de IP esta na tabela C.");
    }
    else if(tab4>0){
    printf("Seu endereco de IP esta na tabela D.");
    }
    else if(tab5>0){
    printf("Seu endereco de IP esta na tabela E.");
    }
}
else if(op==2){
for(ii=0;uniao>0;ii++){
a[ii]=uniao%2;
uniao=uniao/2;
}
for(ii=ii-1;ii>=0;ii--){
printf("%d",a[ii]);
}}
else if(op==3){
    return 0;
}
return 0;
}
