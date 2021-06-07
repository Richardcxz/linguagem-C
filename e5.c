#include <stdio.h>

void main(){
int arm[10]={2,4,35,50,23,17,9,12,27,5};
int b=0,s=0,x;
float m;

for(x=0;x<=9;x++){
if(arm[x]>b){
b=arm[x];
}
s=s+arm[x];
}
m=s/10;
printf("Maior numero = %d\n",b);
printf("Media = %.2f\n",m);
}