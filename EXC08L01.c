/******************************************************************************
8. Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
pago. (0.3 ponto)
*******************************************************************************/
#include <stdio.h>

void apro(float sal){
    float imp;
    if (sal > 5000){
        imp = sal * 0.2;
        printf("O valor do imposto cobrado � de: R$ %.2f", imp); 
    } else {
        imp = sal * 0.1;
        printf("O valor do imposto cobrado � de: R$ %.2f", imp); 
    }
}

float main()
{
    float sal; 
    
    printf("Informe seu sal�rio: ");
    scanf("%f", &sal);
    
    apro(sal);
    
    return 0;
}
