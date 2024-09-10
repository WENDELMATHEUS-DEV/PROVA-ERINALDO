/******************************************************************************
2. Crie uma fun��o que verifique se um ano fornecido � bissexto. Retorne 1 se for
bissexto, caso contr�rio, a fun��o n�o deve retornar nada. Um ano � bissexto se for
divis�vel por 4, exceto os divis�veis por 100, a menos que tamb�m sejam divis�veis
por 400. (0.1 ponto)
*******************************************************************************/
#include <stdio.h>
int bissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        return 1; 
    } else {
        return 0;
    }
}

int main()
{
    int ano, b ; 
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    b = bissexto(ano);
    
    printf("%d\n", b); 
    
    if (bissexto(ano)) {
        printf("O ano informado � bissexto!");
    }
    else 
        printf("O ano informado n�o � bissexto!"); 
    return 0; 
}
