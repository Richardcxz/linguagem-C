#include <stdio.h>

int main(){
char nomes[200];
int ext=0,x,qu,fun,ruim=0,reg=0,bom=0,mb=0,ot=0,q[7];
int nd=0,tott=0,tot[102],b[102],c[102],d[102],e[102];
int porc,porc2;
float insa=0,numfun=0,porc0=0,porc1=0;
/* quantidade de funcionários desejada */
printf("Informe o numero de funcionarios na empresa:\n");
scanf("%f",&numfun);
for(fun=1;fun<=numfun;fun++){
printf("Funcionario %d deseja responder o questionario de satisfacao?\n",fun);
printf("1-Sim 2-Nao\n");
scanf("%d",&qu);
setbuf(stdin,NULL);

if(qu==1){
printf("Digite o seu nome: \n");
gets(nomes);
setbuf(stdin,NULL);
printf("---------------------------\n");
printf("Digite o nome do avaliador: \n");
gets(nomes);
setbuf(stdin,NULL);
printf("Atencao, responda com uma das alternativas\n");
printf("1-Ruim 2-Regular 3-Bom 4-Muito Bom 5-Otimo\n");
printf("Tempo de atendimento: \n");
scanf("%d",&q[1]);
printf("Educacao do vendedor: \n");
scanf("%d",&q[2]);
printf("Clareza das informacoes prestadas: \n");
scanf("%d",&q[3]);
printf("Instrucoes claras e corretas sobre a entrega: \n");
scanf("%d",&q[4]);
printf("Instrucoes claras e corretas sobre a montagem: \n");
scanf("%d",&q[5]);
printf("Atendimento do entregador: \n");
scanf("%d",&q[6]);
printf("Conformidade da entrega: \n");
scanf("%d",&q[7]);
printf("-------------------------\n");
ruim=0;
reg=0;
bom=0;
mb=0;
ot=0;
for(x=1;x<=7;x++){
if(q[x]==1){
ruim++;
}
if(q[x]==2){
reg++;
}
if(q[x]==3){
bom++;
}
if(q[x]==4){
mb++;
}
if(q[x]==5){
ot++;
}
}
b[fun]=reg*40;
c[fun]=bom*60;
d[fun]=mb*80;
e[fun]=ot*100;
tot[fun]=b[fun]+c[fun]+d[fun]+e[fun];
if(tot[fun]<281){
insa++;
}
if(tot[fun]>420){
ext++;
}
printf("TOTAL:  %d\n",tot[fun]);
printf("-------------------------\n");
}
if(qu==2){
nd++;
}
}
if(nd>0){
numfun=numfun-nd;
}
porc0=insa/numfun;
porc1=ext/numfun;
porc=porc0*100;
porc2=porc1*100;
printf("%.0f funcionarios participaram do questionario\n",numfun);
printf("Porcentagem totalmente insatisfeitos %d%%\n",porc);
printf("Porcentagem extremamente satisfeitos %d%%\n",porc2);
if(porc>50){
printf("Mais de 50%% dos funcionarios estao totalmente insatisfeitos.\n");
}
else if(porc2>50){
printf("Mais de 50%% dos funcionarios estao extremamente satisfeitos.\n");
}
return(0);
}
