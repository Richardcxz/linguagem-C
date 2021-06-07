#include <stdio.h>
#include <math.h>
 
int main()
{
unsigned long long int uniao = 000000000000;
unsigned long long int q2 = 999999999999;
unsigned long int w2 = 999999999;
unsigned long int e2 = 999999;
unsigned long int r2 = 999;
int ip[4]={0},i;
int q,w,e,r,a,b,c,d;

printf("-------------------");
printf("\n IP: ");
setbuf(stdin,NULL);
scanf("%d%*c%d%*c%d%*c%d",&ip[0],&ip[1],&ip[2],&ip[3]);
q=ip[0];
w=ip[1];
e=ip[2];
r=ip[3];
printf("teste %d %d %d %d\n",q,w,e,r);
q2=q*pow(10,9);
w2=w*pow(10,6);
e2=e*pow(10,3);
r2=r*pow(10,0);

printf("teste %llu\n",q2);
printf("teste %lu\n",w2);
printf("teste %lu\n",e2);
printf("teste %lu\n",r2);
setbuf(stdin,NULL);
uniao=uniao+q2+w2+e2+r2;
printf("uniao: %llu\n",uniao);

  	return 0;
}