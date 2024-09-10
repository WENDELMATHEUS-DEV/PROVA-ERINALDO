/******************************************************************************
5. Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
casos em que a pessoa é maior ou menor de idade. (0.3 ponto)
*******************************************************************************/
#include <stdio.h>
void id(int idade) {
    if (idade >= 18) {
        printf("Você possui maioridade penal!");
    } else {
         printf("Você ainda não possui maioridade penal!"); 
    }
}
    
int main()
{
    int idade; 
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    id(idade);

    return 0;
}
