#include <stdio.h>
#include <stdlib.h>

int main () {
     int A, B;

    printf("\n INSIRA O VALOR DE A: ");
    scanf("%d" &A);
    printf("\n INSIRA O VALOR DE B: ");
    scanf("%d" &B);

     if(A != B) {
     printf("\n N�MEROS DIFERENTES! \t");
     }
     else {
        printf ("\n N�MEROS IGUAIS! \t");
     }
    return 0;
}
