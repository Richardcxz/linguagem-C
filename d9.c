#include <stdio.h>

int main(){
char p1[50],p2[50],p3[50],p4[50],p5[50];
char aapg='Nome Apagado';
char apg2='S';
char apg3='s';
char volta='z';
int op=0,apg;

printf("Digite o primeiro nome: \n");
gets(p1);
printf("Digite o segundo nome: \n");
gets(p2);
printf("Digite o terceiro nome: \n");
gets(p3);
printf("Digite o quarto nome: \n");
gets(p4);
printf("Digite o quinto nome: \n");
gets(p5);
setbuf(stdin,NULL);
do{
printf("Escolha uma opcao\n");
printf("(1) Mostrar a lista de nomes\n");
printf("(2) Apagar um nome da lista\n");
printf("(3) Sair\n");
scanf("%d",&op);
if(op<=0 || op>=3){
printf("FIM DO PROGRAMA\n");
return (0);
}
if(op==1){
printf("Nome 1: %s\n",p1);
printf("Nome 2: %s\n",p2);
printf("Nome 3: %s\n",p3);
printf("Nome 4: %s\n",p4);
printf("Nome 5: %s\n",p5);
setbuf(stdin,NULL);
}
if(op==2){
printf("Qual dos nomes deseja apagar?\n");
printf("Nome 1: %s\n",p1);
printf("Nome 2: %s\n",p2);
printf("Nome 3: %s\n",p3);
printf("Nome 4: %s\n",p4);
printf("Nome 5: %s\n",p5);
scanf("%d",&apg);
setbuf(stdin,NULL);
if(apg==1){
memset(p1, 0, sizeof(p1));
}
if(apg==2){
memset(p2, 0, sizeof(p2));
}
if(apg==3){
memset(p3, 0, sizeof(p3));
}
if(apg==4){
memset(p4, 0, sizeof(p4));
}
if(apg==5){
memset(p5, 0, sizeof(p5));
}
setbuf(stdin,NULL);
printf("O nome foi apagado\n");
printf("Nome 1: %s\n",p1);
printf("Nome 2: %s\n",p2);
printf("Nome 3: %s\n",p3);
printf("Nome 4: %s\n",p4);
printf("Nome 5: %s\n",p5);
setbuf(stdin,NULL);
}
}while (op<=0 && op>=4);
return (0);
}
