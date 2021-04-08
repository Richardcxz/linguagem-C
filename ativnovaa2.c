#include <stdio.h>

int main() {
int v[5],z,zz=0,y,baixa=0,alta=0;

    for(z=0;z<=4;z++){
    printf("Digite a nota da turma A: ");
    scanf("%d",&v[z]);
    }
    for(z=0;z<=4;z++){
    if(v[z]>7){
    alta++;
    }
    else{
    baixa++;
    }
    zz=zz+v[z];
    }
    y=zz/5;
    if(alta>=1){
    printf("Alunos aprovados: %d\n",alta);
    }
    printf("-----------------------------\n");
    if(y>=7){
    printf("A sala teve uma boa media: %d\n",y);
    }
    else if(y<7){
    printf("A sala teve uma ma media: %d\n",y);
    }
    return 0;
}
