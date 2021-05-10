#include <stdio.h>

int main(){
char a[9];
int x,cont=0;
do{
for(x=0;x<=9;x++){
printf("Digite uma letra: \n");
scanf("%c",&a[x]);
setbuf(stdin,NULL);
printf("Letra adicionada. Adicionar mais(1) ou mostrar o resultado(2)?\n");
scanf("%d",&cont);
setbuf(stdin,NULL);
if(cont==1){
cont++;
}
else if(cont==2){
switch(x){
case 0:printf("RESULTADO: %c\n",a[0]);
setbuf(stdin,NULL);
return(0);
break;
case 1:printf("RESULTADO: %c%c\n",a[0],a[1]);
setbuf(stdin,NULL);
return(0);
break;
case 2:printf("RESULTADO: %c%c%c\n",a[0],a[1],a[2]);
setbuf(stdin,NULL);
return(0);
break;
case 3:printf("RESULTADO: %c%c%c%c\n",a[0],a[1],a[2],a[3]);
setbuf(stdin,NULL);
return(0);
break;
case 4:printf("RESULTADO: %c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4]);
setbuf(stdin,NULL);
return(0);
break;
case 5:printf("RESULTADO: %c%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4],a[5]);
setbuf(stdin,NULL);
return(0);
break;
case 6:printf("RESULTADO: %c%c%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
setbuf(stdin,NULL);
return(0);
break;
case 7:printf("RESULTADO: %c%c%c%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);
setbuf(stdin,NULL);
return(0);
break;
case 8:printf("RESULTADO: %c%c%c%c%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
setbuf(stdin,NULL);
return(0);
break;
case 9:printf("RESULTADO: %c%c%c%c%c%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
setbuf(stdin,NULL);
return(0);
break;
}}}
}while(cont=1);
return(0);
}
