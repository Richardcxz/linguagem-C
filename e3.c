void main(){
int a,m,t,d;

printf("Digite o numero de Alunos: \n");
scanf("%d",&a);
printf("Digite o numero de Monitores: \n");
scanf("%d",&m);
t=a+m;
if(t<=50){
printf("O bonde consegue aguentar as %d pessoas",t);
}
if(t>50){
d=t-50;
printf("O bonde nao aguenta o peso, ha %d pessoa(s) a mais",d);
}
}
