/******************************************************************************
7. Desenvolva uma função que receba um número inteiro e determine se ele é par
ou ímpar. Exiba uma mensagem correspondente para cada caso. (0.3 ponto)
*******************************************************************************/
#include <stdio.h>

void par(int n){
    if (n % 2 == 0){
        printf("O número informado é par."); 
    } else {
         printf("O número informado é impar."); 
    }
}

int main()
{
    int n; 
    
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    
    par(n);
    
    return 0;
}
