#include <stdio.h>

float calculajuros(float valor, float juros)
{
    float r=valor+((valor*juros)/100);
    return(r);
}


int main()
{
    float valorcarro, juros, valorfin=0;
    int npar, mes;
    char op='n';
    char carro[40];

    do {
    printf("*** Simulador de Financiamento ***\n");
    printf("Modelo do carro: ");
    setbuf(stdin,NULL);
    gets(carro);
    printf("Digite o valor do carro: ");
    scanf("%f",&valorcarro);
    printf("Digite numero de parcelas: ");
    scanf("%d",&npar);
    printf("Informe a taxa de juros: ");
    scanf("%f",&juros);

    for(mes=1;mes<=npar;mes++){
        if (mes==1){
            valorfin=calculajuros(valorcarro,juros);
        }
        else
        {
            valorfin=calculajuros(valorfin,juros);
        }
    }
    printf("Total do financiamento = %.2f\n",valorfin);
    printf("Valor das parcelas = %.2f\n",valorfin/npar);

    printf("\nDigite S para sair, outra tecla continua...\n");
    scanf(" %c",&op);

    }while (op!='s' && op!='S');

    return(0);
}
