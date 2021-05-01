#include <stdio.h>

int main() {
int num, ct;

for(num=1;num<=999;){
printf("Insira um numero aqui: ");
scanf("%d", &num);
if(num<999){
num=num*3;
if(num>=999){
printf("Numero acima de 999!\n");
}
else{
printf("O triplo de seu numero e: %d\n", num);
}}
else if(num>=999){
printf("Numero acima de 999!");
}
}

    
return 0;
}
