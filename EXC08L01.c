/******************************************************************************
8. Elabore uma função que calcule o imposto sobre um salário com base no valor
recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
pago. (0.3 ponto)
*******************************************************************************/
#include <stdio.h>

void apro(float sal){
    float imp;
    if (sal > 5000){
        imp = sal * 0.2;
        printf("O valor do imposto cobrado é de: R$ %.2f", imp); 
    } else {
        imp = sal * 0.1;
        printf("O valor do imposto cobrado é de: R$ %.2f", imp); 
    }
}

float main()
{
    float sal; 
    
    printf("Informe seu salário: ");
    scanf("%f", &sal);
    
    apro(sal);
    
    return 0;
}
