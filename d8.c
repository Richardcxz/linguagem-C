#include <stdio.h>

int main() {
float ip;
int a[10],i,iip,bin,op,tab1=0,tab2=0,tab3=0,tab4=0,tab5=0;
printf("Digite um endereco de IP: \n");
scanf("%3f", &ip);
setbuf(stdin,NULL);
printf("-------------------------------\n");
iip=ip;
printf("Escolha o que fazer com %d\n",iip);
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
for(i=0;iip>0;i++){
a[i]=iip%2;
iip=iip/2;
}
for(i=i-1;i>=0;i--){
printf("%d",a[i]);
}}
else if(op==3){
    return 0;
}
return 0;
}
