#include <stdio.h>
int main()
{
int n,j=1,soma=0;
while(j<=5){
printf("Digite um valor: ");
scanf("%d",&n);
soma=soma+n;
j++;
}
printf("Total da soma = %d\n",soma);

 return(0);
}
