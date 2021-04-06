#include <stdio.h>
int main()
{
int v[10],x;
for(x=0;x<=9;x++){
printf("Digite um valor: ");
scanf("%d",&v[x]);
if(v[x]<30){
v[x]=1;
}
}



for(x=0;x<=9;x++){
printf("Elemento [%d] = %d\n",x,v[x]);
}

return(0);
}