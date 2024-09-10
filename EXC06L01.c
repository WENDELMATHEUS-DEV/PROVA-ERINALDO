/******************************************************************************
6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
reprovação caso contrário. A função deve exibir mensagens para os dois casos. (0.3
ponto)
*******************************************************************************/
#include <stdio.h>

void apro(float nota){
    if (nota >= 7.0)
        printf("Você está aprovado!");
    else 
        printf("Você está reprovado!");
}

int main()
{
    float nota; 
    
    printf("Informe sua nota: ");
    scanf("%f", &nota);
    
    apro(nota);
    
    return 0;
}

