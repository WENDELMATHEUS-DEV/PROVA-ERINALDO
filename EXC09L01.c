/******************************************************************************
9. Crie uma fun��o que receba o sal�rio bruto de uma pessoa e calcule o valor do
Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
Utilize as al�quotas e dedu��es conforme a tabela abaixo:
? At� R$ 2.112,00: Isento
? De R$ 2.112,01 at� R$ 2.826,65: Al�quota de 7,5% (dedu��o de R$ 158,40)
? De R$ 2.826,66 at� R$ 3.751,05: Al�quota de 15% (dedu��o de R$ 370,40)
? De R$ 3.751,06 at� R$ 4.664,68: Al�quota de 22,5% (dedu��o de R$ 651,73)
? Acima de R$ 4.664,68: Al�quota de 27,5% (dedu��o de R$ 884,96)
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
    
    printf("Informe o sal�rio buto: ");
    scanf("%f", &sal);
    
    impostorenda = imposto(sal);
    
    printf("O valor do Imposto de Renda retido � de: R$ %.2f", impostorenda);
    
    return 0;
}
