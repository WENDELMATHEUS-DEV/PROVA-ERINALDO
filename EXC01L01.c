/******************************************************************************
1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
por essa razão, limite a verificação a um conjunto pequeno de números para
verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.
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
        printf("O número informado é primo!");
    } else {
        printf("O número informado não é primo!");
    }
    return 0;
}
