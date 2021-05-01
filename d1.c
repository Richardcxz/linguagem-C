#include <stdio.h>
int main()
{
    int x[5],y[5],z[10],j,k=0,i,igualdade=0;
    for(j=0;j<=4;j++){
        printf("Digite um valor para o vetor X: ");
        scanf("%d",&x[j]);
    }
    printf("----------------------------\n");
    for(j=0;j<=4;j++){
        printf("Digite um valor para o vetor Y: ");
        scanf("%d",&y[j]);
    }

    for (int i=0; i<=4;i++){
        z[k]=x[i];
        k++;
    }

    for (i=0; i<=4;i++){
      for (j=0; j<=4;j++){
        if (y[i]==x[j]){
            igualdade++;
        }
      }
      if (igualdade==0){
         z[k]=y[i];
         k++;
      }
      igualdade=0;
    }

    for(j=0;j<=k-1;j++){
        printf("Elemento [%d] = %d\n",j,z[j]);
    }


    return(0);
}
