#include <stdio.h>
int main()
{
int p,op;
float pfinal;
printf("Digite o seu peso na Terra: ");
scanf("%d",&p);
printf("Digite sua opcao: \n");
printf("1 - Mercurio\n");
printf("2 - Venus\n");
scanf("%d",&op);
switch(op){
case 1:
pfinal=p*0.37;
break;
case 2:
pfinal=p*0.88;
break;
case 3:
pfinal=p*0.38;
break;
case 4:
pfinal=p*2.64;
break;
case 5:
pfinal=p*1.15;
break;
}
printf("Peso Final = %f\n",pfinal);



return(0);
}
