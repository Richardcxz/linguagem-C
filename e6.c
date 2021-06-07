#include <stdio.h>

void main(){
int p,d1,d2,d,dd;
p=0;
d1=4;
d2=3;
d=d1%2;
dd=d2%2;

if(p==0){
if(d+dd<0){
printf("1");
}
else if(d+dd==0){
printf("0");
}}
else if(p==1){
if(d+dd<0){
printf("0");
}
else if(d+dd==0){
printf("1");
}}

}