#include <stdio.h>

int main() {
int aul, cas, inss, tot, tott;

printf("Digite o valor ganho por aula: ");
scanf("%d", &cas);

printf("Digite o numero de aulas dadas: ");
scanf("%d", &aul);
tott=cas*aul;
if (tott>1100){
    inss=tott*0.9;
    tot=tott-inss;
printf("O valor total sera de: %d", tot);
}
else if (tott<=1100){
inss=tott*0.7;
tot=tott-inss;
printf("O valor total sera de: %d", tot);
}

    return 0;
}
