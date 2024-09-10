/******************************************************************************
11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
de ICMS com base nas faixas de preço do produto:
? Até R$ 1.000,00: Desconto de 5%
? De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
? Acima de R$ 5.000,00: Desconto de 15%
Use a estrutura condicional aninhada para aplicar o desconto corretamente. (0.4
ponto)
*******************************************************************************/
#include <stdio.h>

float imp(float prod){
    float desc; 
    if (prod <= 1000){
        desc = prod * 0.05;
    } else if (prod <= 5000){
        desc = prod * 0.10;
    } else {
        desc = prod * 0.15;
    }
    return desc;  
}

int main()
{
    float prod, icms; 
    
    printf("Informe o valor do produto: ");
    scanf("%f", &prod);
    
    icms = imp(prod);
    
    printf("O valor do desconto de ICMS é de: R$%.2f", icms);
    
    return 0;
}
