#include <stdio.h>

int main() {
int x, n, pa, pb, pc, pd, pe, pf, pg;
    printf("Digite o numero de associados do clube: ");
    scanf("%d", &n);
    printf("Numero de pessoas que praticam tiro com arco: \n"); 
    scanf("%d", &pa);
    printf("Numero de pessoas que praticam badminton: \n");  
    scanf("%d", &pb);
    printf("Numero de pessoas que praticam canoagem: \n");    
    scanf("%d", &pc);
    printf("Numero de pessoas que praticam arco e badmington: \n"); 
    scanf("%d", &pd);
    printf("Numero de pessoas que praticam arco e canoagem: \n");
    scanf("%d", &pe);
    printf("Numero de pessoas que praticam bad e canoagem: \n");
    scanf("%d", &pf);
    printf("Numero de pessoas que nao praticam nada: \n");
    scanf("%d", &pg);
if(n==pa+pb+pc-pd-pe-pf+pg) {
    printf("N");
}
else {
    printf("S");
}

    
    return 0;
}