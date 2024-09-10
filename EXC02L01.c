/******************************************************************************
2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
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
        printf("O ano informado é bissexto!");
    }
    else 
        printf("O ano informado não é bissexto!"); 
    return 0; 
}
