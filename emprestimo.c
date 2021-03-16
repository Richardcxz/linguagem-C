#include <stdio.h>
int main()
{
int s, p, apr;

printf("Insira o salario bruto: ");
scanf("%d", &s);

printf("Insira o valor da prestacao: ");
scanf("%d", &p);

apr=s*0.30;

if(apr>p){
printf("Seu emprestimo foi aprovado.");
}
else{
    printf("Seu emprestimo foi reprovado.");
}


return(0);
}
