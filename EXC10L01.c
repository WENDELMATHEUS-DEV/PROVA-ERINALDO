/******************************************************************************
10. Elabore uma fun��o que receba o sal�rio bruto de uma pessoa e calcule o valor
da contribui��o ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
al�quotas progressivas para calcular o valor da contribui��o:
? At� R$ 1.320,00: 7,5%
? De R$ 1.320,01 at� R$ 2.571,29: 9%
? De R$ 2.571,30 at� R$ 3.856,94: 12%
? De R$ 3.856,95 at� R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente. (0.4
ponto)
*******************************************************************************/
#include <stdio.h>

float icms(float sal){
    float cont; 
    if (sal <= 1320){
        cont = sal * 0.075;
    } else if (sal <= 2571.29){
        cont = sal * 0.09;
    } else if (sal <= 3856.94){
        cont = sal * 0.12;
    } else {
        cont = sal * 0.14;
    }
    return cont;  
}

int main()
{
    float sal, contribuicao; 
    
    printf("Informe o sal�rio buto: ");
    scanf("%f", &sal);
    
    contribuicao = icms(sal);
    
    printf("O valor da contribui��o � de: R$ %.2f", contribuicao);
    
    return 0;
}
