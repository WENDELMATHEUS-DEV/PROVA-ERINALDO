/******************************************************************************
10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
alíquotas progressivas para calcular o valor da contribuição:
? Até R$ 1.320,00: 7,5%
? De R$ 1.320,01 até R$ 2.571,29: 9%
? De R$ 2.571,30 até R$ 3.856,94: 12%
? De R$ 3.856,95 até R$ 7.507,49: 14%
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
    
    printf("Informe o salário buto: ");
    scanf("%f", &sal);
    
    contribuicao = icms(sal);
    
    printf("O valor da contribuição é de: R$ %.2f", contribuicao);
    
    return 0;
}
