/******************************************************************************
12. Desenvolva uma fun��o que receba o valor de venda de um im�vel e calcule o valor
do IPTU com base na tabela abaixo:
? At� R$ 100.000,00: Al�quota de 1%
? De R$ 100.000,01 at� R$ 300.000,00: Al�quota de 1,5%
? De R$ 300.000,01 at� R$ 500.000,00: Al�quota de 2%
? Acima de R$ 500.000,00: Al�quota de 2,5%
Use a estrutura condicional aninhada para aplicar a al�quota corretamente. (0.4
ponto)
*******************************************************************************/
#include <stdio.h>

float imovel(float imov){
    float iptu; 
    if (imov <= 100000){
        iptu = imov * 0.01;
    } else if (imov <= 300000){
        iptu = imov * 0.015;
    } else if (imov <= 500000){
        iptu = imov * 0.020;
    } else {
        iptu = imov * 0.025;
    }
    return iptu;  
}

int main()
{
    float imov, diptu; 
    
    printf("Informe o valor do im�vel: ");
    scanf("%f", &imov);
    
    diptu = imovel(imov);
    
    printf("O valor do desconto de IPTU � de: R$%.2f", diptu);
    
    return 0;
}
