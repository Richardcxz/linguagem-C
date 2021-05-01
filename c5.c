#include <stdio.h>
int main()
{
int v[5],x,s=0;
for(x=0;x<=4;x++){
printf("Digite um valor: ");
scanf("%d",&v[x]);
s=s+v[x];
}



for(x=0;x<=4;x++){
printf("Elemento [%d] = %d\n",x,v[x]);
}
printf("Total da soma = %d\n",s);



return(0);
}
