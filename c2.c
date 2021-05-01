#include <stdio.h>
int main()
{
int v[10],w[10],x,y,xx,yy,z;

for(x=0;x<=9;x++){
printf("Digite um valor para a var V: ");
scanf("%d",&v[x]);
xx=xx+v[x];
}
for(y=0;y<=9;y++){
printf("Digite um valor para a var W: ");
scanf("%d",&w[y]);
yy=yy+w[y];
}
z=xx+yy;
if(z>0){
printf("O valor da soma sera: %d\n",z);
}

return(0);
}
