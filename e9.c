#include <stdio.h>

void main(){
int matriz[8][8],i,j,pawn=0,bisp=0,aus=0;

  for ( i=0; i<8; i++ )
    for ( j=0; j<8; j++ )
    {
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
      if(matriz[i][j]==1){
      pawn++;
      }
      if(matriz[i][j]==4){
      bisp++;
      }
      if(matriz[i][j]==0){
      aus++;
      }
    }
  
  printf("----------------------------------\n");

printf ("Quantidade de peoes = %d\n",pawn);
printf ("Quantidade de bispos = %d\n",bisp);
printf ("Quantidade de pecas ausentes = %d\n",aus);
}