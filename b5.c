#include <stdio.h>

int main() {
int x, cont, novo=0, velho=0;

for(cont=1;cont<=5;cont++){
printf("Digite uma idade aqui: ");
scanf("%d", &x);
if(x>0 && x<21){
    novo++;
}
if(x>50){
    velho++;}
if(x<0){
printf("Idade invalida!\n");
}}
    
if(novo>0 && velho>0){
 printf("O total de pessoas com menos de 21 anos eh: %d\n", novo);
 printf("O total de pessoas com mais de 50 anos eh: %d\n", velho);
}
else if(novo==0 && velho>0){
 printf("O total de pessoas com menos de 21 anos eh 0.\n");
 printf("O total de pessoas com mais de 50 anos eh: %d\n", velho);
}
else if(novo>0 && velho==0){
 printf("O total de pessoas com menos de 21 anos eh: %d\n", novo);
 printf("O total de pessoas com mais de 50 anos eh 0.\n");
 }

return 0;
}
