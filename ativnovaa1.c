#include <stdio.h>

int main() {
int v[10],x[10],z,zz;
    for(z=0;z<=4;z++){
    printf("Digite o valor para A: ");
    scanf("%d",&v[z]);
    }
    printf("------------------------\n");
    for(z=0;z<=4;z++){
    printf("Digite o valor para B: ");
    scanf("%d",&x[z]);
    }
    for(z=0;z<=4;z++){
    if(v[z]!=x[z]){
    printf("Uniao: [%d][%d]\n",v[z],x[z]);
    }
    else if(v[z]==x[z]){
    printf("Uniao: [%d]\n",v[z]);
    }}
    return 0;
}
