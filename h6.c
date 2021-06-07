#include <stdio.h>
#define PI 3.14



int k;



int valores()
{
int j=10;
return(j+1);
}




int main()
{
printf("Valor total = %d\n",valores());
printf("Entrar com Valor de k\n");
scanf("%d",&k);
printf("Valor atual de k = %d\n",k);
printf("Valor de PI = %f\n",PI);



return(0);
}