/******************************************************************************
1. Crie uma fun��o que receba um n�mero inteiro de 1 a 10 e retorne 1 se o n�mero
for primo. Caso contr�rio, n�o retorne nada. Voc� n�o pode usar la�os de repeti��o,
por essa raz�o, limite a verifica��o a um conjunto pequeno de n�meros para
verificar se s�o primos. Um n�mero primo � divis�vel apenas por 1 e por ele mesmo.
(0.1 ponto)

*******************************************************************************/
#include <stdio.h>
int primo(int n){
    
    if (n == 2 || n == 3 || n == 5 || n == 7){
        return 1; 
    } else {
        return 0;
    }
}

int main()
{
    int n, p; 
    
    printf("Informe um numero inteiro (1-10): ");
    scanf("%d", &n);
    
    p = (primo(n));
    
    printf("%d\n", p);
    
    if (primo(n)) {
        printf("O n�mero informado � primo!");
    } else {
        printf("O n�mero informado n�o � primo!");
    }
    return 0;
}
