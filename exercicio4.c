#include <stdio.h>
int main()
{
int n,negt=0;
for(x=1,x<=5,x++){
printf("Digite um valor: ");
scanf("%d",&n);
if (n<0){
    negt++;
}
}
printf("Numeros negativos = %d\n",negt);

return(0);
}
