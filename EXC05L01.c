/******************************************************************************
5. Crie uma fun��o que receba a idade de uma pessoa e verifique se ela � maior de
idade (18 anos ou mais). A fun��o deve exibir uma mensagem diferente para os
casos em que a pessoa � maior ou menor de idade. (0.3 ponto)
*******************************************************************************/
#include <stdio.h>
void id(int idade) {
    if (idade >= 18) {
        printf("Voc� possui maioridade penal!");
    } else {
         printf("Voc� ainda n�o possui maioridade penal!"); 
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
