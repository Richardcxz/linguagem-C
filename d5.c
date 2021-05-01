#include <stdio.h>

void main() {
int c[5],d[5],x,z=0,zz,zx=0;
    for(x=0;x<=3;x++){
    printf("Digite a nota para a sala A: ");
    scanf("%d",&c[x]);
    if(c[x]>=7){
    zx++;
    }}
    for(x=0;x<=3;x++){
    z=z+c[x];
    }
    zz=z/4;
    if(zz>7){
   printf("%d aluno(s) aprovado(s) na sala, media total: %d\n",zx,zz);
    }
    else if(zz<7){
    printf("sala reprovada, %d aluno(s) aprovado(s) na sala\n",zx);
    }
}
