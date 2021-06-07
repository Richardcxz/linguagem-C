#include <stdio.h>

int main() {
char n[9],a,A;
char l='a';
char ll='A';
int cc=0,x;

printf("Digite um nome de ate 10 letras.\n");
scanf("%c",&n);
setbuf(stdin,NULL);

if(n[0]==l || n[0]==ll){
cc++;
}
if(n[1]==l || n[1]==ll){
cc++;
}
if(n[2]==l || n[2]==ll){
cc++;
}
if(n[3]==l || n[3]==ll){
cc++;
}
if(n[4]==l || n[4]==ll){
cc++;
}
if(n[5]==l || n[5]==ll){
cc++;
}
if(n[6]==l || n[6]==ll){
cc++;
}
if(n[7]==l || n[7]==ll){
cc++;
}
if(n[8]==l || n[8]==ll){
cc++;
}
if(n[9]==l || n[9]==ll){
cc++;
}
printf("existem %d 'A' no nome.\n",cc);
    return 0;
}