#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

void main(){
int i;

printf("Gerando 10 valores aleatorios:\n\n");

srand(time(NULL));
for (i=0; i < 10; i++)
{
printf("%d ", rand() % 100);
}
getch();
return 0;
}
