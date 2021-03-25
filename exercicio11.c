#include <stdio.h>
Int main() {
 int x,numero=0, maior=0, menor=0;
 // Tem que inicializar as variáveis maior e menor com zero 
 // Inicializa a variável número com zero para entrar no while 
 while (numero >= 0) {
printf("Informe um valor positivo: ");
scanf("%d", &numero);
if (numero > 0) {
 // se o numero for positivo 
 if (numero > maior) {
 maior = numero; 
 }
 else {
 menor = numero;
}
 }
 printf("O maior e %d e o menor e %d\n", maior, menor);
 return (0);
}