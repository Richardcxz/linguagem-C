#include <stdio.h>
int main()
{
int m[3][3],x,y;
for(x=0;x<=2;x++){
for(y=0;y<=2;y++){
printf("Entrar com o elemento da posicao [%d,%d]:",x,y);
scanf("%d",&m[x][y]);
}
}



for(x=0;x<=2;x++){
for(y=0;y<=2;y++){
printf("Elemento da posicao [%d,%d]: = %d\n",x,y,m[x][y]);
}
}



return(0);
}