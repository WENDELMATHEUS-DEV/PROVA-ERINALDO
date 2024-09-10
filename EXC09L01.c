/******************************************************************************
9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
Utilize as alíquotas e deduções conforme a tabela abaixo:
? Até R$ 2.112,00: Isento
? De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
? De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
? De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
? Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
Use a estrutura condicional aninhada para calcular o imposto corretamente. (0.4
ponto)
*******************************************************************************/
#include <stdio.h>

float imposto(float sal){
    float imp; 
    if (sal <= 2112){
        imp = 0.0;
    } else if (sal <= 2826.65){
        imp = (sal * 0.075) - 158.40;
    } else if (sal <= 3751.05){
        imp = (sal * 0.15) - 370.40;
    } else if (sal <= 4664.68){
        imp = (sal * 0.225) - 651.73;
    } else {
        imp = (sal * 0.275) - 884.90;
    }
    return imp;  
}

int main()
{
    float sal, impostorenda; 
    
    printf("Informe o salário buto: ");
    scanf("%f", &sal);
    
    impostorenda = imposto(sal);
    
    printf("O valor do Imposto de Renda retido é de: R$ %.2f", impostorenda);
    
    return 0;
}
