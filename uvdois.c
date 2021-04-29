#include <stdio.h>
// buffer de teclado
void verificabuffer()
{
char c;
while ((c=getchar())!='\n' && c!=EOF);
}




int main()
{
char c='n';
char no[50];
char cid[60];
while(c!='s' && c!='S'){



printf("Digite seu nome: ");
gets(no);
printf("Digite sua cidade: ");
gets(cid);



printf("\nDigite S para sair ou outra tecla para continuar...\n");
scanf("%c",&c);
verificabuffer();
}
return(0);
}
