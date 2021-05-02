#include <stdio.h>
#include <math.h>

void main() {
int esc,case1,case2,case3,adc,adc2,adc3,sub,sub2,sub3,mult,mult2,mult3,divi,divi2,divi3,pot,pot2,pot3;
float rad,rad2;

printf("Escolha qual tipo de conta deseja fazer:\n");
printf("1-Adicao e Subtracao\n");
printf("2-Multiplicacao e Divisao\n");
printf("3-Potenciacao e Radiciacao\n");
scanf("%d", &esc);
if(esc>=4 || esc<=0){
printf("escolha invalida!\n");
}
switch(esc){
case 1:
printf("(1)Adicao ou (2)Subtracao\n");
scanf("%d",&case1);
if(case1>=3 || case1<=0){
printf("escolha invalida!"); }
if(case1==1){
printf("digite o primeiro valor:\n");
scanf("%d",&adc);
printf("digite o segundo valor:\n");
scanf("%d",&adc2);
adc3=adc+adc2;
printf("a soma dos dois valores sera: %d\n",adc3);
}
else if(case1==2){
printf("digite o primeiro valor:\n");
scanf("%d",&sub);
printf("digite o segundo valor:\n");
scanf("%d",&sub2);
sub3=sub-sub2;
printf("a subtracao entre os dois valores sera: %d\n",sub3);
}
break;
case 2:
printf("(1)Multiplicacao ou (2)Divisao\n");
scanf("%d",&case2);
if(case2>=3 || case2<=0){
printf("escolha invalida!");
}
if(case2==1){
printf("digite o primeiro valor:\n");
scanf("%d",&mult);
printf("digite o segundo valor:\n");
scanf("%d",&mult2);
mult3=mult*mult2;
printf("a multiplicacao dos dois valores sera: %d\n",mult3);
}
else if(case2==2){
printf("digite o primeiro valor:\n");
scanf("%d",&divi);
printf("digite o segundo valor:\n");
scanf("%d",&divi2);
divi3=divi/divi2;
printf("a divisao entre os dois valores sera: %d\n",divi3);
}
break;
case 3:
printf("(1)Potenciacao ou (2)Radiciacao(2)\n");
scanf("%d",&case3);
if(case3>=3 || case3<=0){
printf("escolha invalida!");
}
if(case3==1){
printf("digite a variavel:\n");
scanf("%d",&pot);
printf("digite o expoente:\n");
scanf("%d",&pot2);
pot3=pow(pot,pot2);
printf("valor de %d elevado a %d = %d\n",pot,pot2,pot3);
}
else if(case3==2){
printf("digite o valor a ser radiciado:\n");
scanf("%f",&rad);
rad2=sqrt(rad);
printf("a valor da radiciacao sera: %f\n",rad2);
}
break;

}}
