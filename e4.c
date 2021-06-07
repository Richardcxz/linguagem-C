#include <stdio.h>

void main(){
int x,vet,arm[5];

for(x=1;x<=5;x++){
scanf("%d",&arm[x]);
arm[x]=(arm[x]-1)+arm[x];
}
for(x=1;x<=5;x++){
printf("%d ",arm[x]);
}
}