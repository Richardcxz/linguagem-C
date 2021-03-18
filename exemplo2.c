#include <stdio.h>
int main()
{
int n,j,soma=0;
for(j=1;j<=5;j++){
printf("Digite um valor: ");
scanf("%d",&n);
soma=soma+n;
}
printf("Total da soma = %d\n",soma);

return(0);
}
