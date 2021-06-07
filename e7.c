#include <stdio.h>

void main(){
int x,pos,p,t=0,r=0;
scanf ("%d",&pos);
for(x=1;x<=pos;x++){
scanf("%d",&p);
if(p<50){
t++;
}
else if(p>50 && p<85){
r++;
}}
printf("%d %d",t,r);

    
}