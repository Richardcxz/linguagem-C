#include <stdio.h>

int main() {
int x, y, a, b, c, d, e;

printf("Digite a capacidade de peso do elevador: ");
scanf("%d", &x);
printf("Digite o peso da pessoa A: \n");
scanf("%d", &a);
printf("Digite o peso da pessoa B: \n");
scanf("%d", &b);
printf("Digite o peso da pessoa C: \n");
scanf("%d", &c);
printf("Digite o peso da pessoa D: \n");
scanf("%d", &d);
printf("Digite o peso da pessoa E: \n");
scanf("%d", &e);
y=a+b+c+d+e;
if(x>y) {
printf("O elevador suporta o peso.");
}
else {
printf("O elevador nao suporta o peso.");
}


    return 0;
}