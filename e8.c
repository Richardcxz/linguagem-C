#include <stdio.h>

void main(){
int n,x,rep=0;
scanf("%d",&n);
int num[n];
for(x=1;x<=n;x++){
scanf("%d",&num[x]);
}
for(x=1;x<=n;x++){
if(num[x]==num[x+1] || num[x]==num[x-1] || num[x]==num[x-x+1]){
rep=num[x];
}}
printf("repet %d",rep);
}