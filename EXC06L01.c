/******************************************************************************
6. Elabore uma fun��o que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprova��o ocorre se a nota for 7 ou superior, e
reprova��o caso contr�rio. A fun��o deve exibir mensagens para os dois casos. (0.3
ponto)
*******************************************************************************/
#include <stdio.h>

void apro(float nota){
    if (nota >= 7.0)
        printf("Voc� est� aprovado!");
    else 
        printf("Voc� est� reprovado!");
}

int main()
{
    float nota; 
    
    printf("Informe sua nota: ");
    scanf("%f", &nota);
    
    apro(nota);
    
    return 0;
}

