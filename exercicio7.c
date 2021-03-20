#include <stdio.h>

int main() {
int x, sx, id;


for(x=1;x<=20;x++){
printf("Sexo (1)masculino ou (2)feminino?: \n");
scanf("%d", &sx);
printf("Insira a idade: \n");
scanf("%d", &id);
if(sx==1 && id>=21){
printf("Sexo masculino e 21 anos.\n");
}}
return 0;
}