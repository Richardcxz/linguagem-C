#include <stdio.h>

void main(){
int tab[4][5],per=0,per1,per2,pera,peraa,perb,perbb,x,i,j;

tab[0][0]=0; tab[0][1]=15;tab[0][2]=30;tab[0][3]=05;tab[0][4]=12;
tab[1][0]=15; tab[1][1]=0;tab[1][2]=10;tab[1][3]=17;tab[1][4]=28;
tab[2][0]=30; tab[2][1]=10;tab[2][2]=0;tab[2][3]=03;tab[2][4]=11;
tab[3][0]=05; tab[3][1]=17;tab[3][2]=03;tab[3][3]=0;tab[3][4]=80;
tab[4][0]=12; tab[4][1]=28;tab[4][2]=11;tab[4][3]=80;tab[4][4]=0;

printf("0 15 30 05 12\n");
printf("15 0 10 17 28\n");
printf("30 10 0 03 11\n");
printf("05 17 03 0 80\n");
printf("12 28 11 80 0\n");
printf("-------------------\n");
printf("Escolha um percurso A: \n");
scanf("%d%*c%d",&pera,&peraa);
printf("Escolha um percurso B: \n");
scanf("%d%*c%d",&perb,&perbb);
per1=tab[pera][peraa];
per2=tab[perb][perbb];
per=per1+per2;
printf("Total do percurso %d + %d: %d KM",per1,per2,per);
}