/******************************************************************************
7. Desenvolva uma fun��o que receba um n�mero inteiro e determine se ele � par
ou �mpar. Exiba uma mensagem correspondente para cada caso. (0.3 ponto)
*******************************************************************************/
#include <stdio.h>

void par(int n){
    if (n % 2 == 0){
        printf("O n�mero informado � par."); 
    } else {
         printf("O n�mero informado � impar."); 
    }
}

int main()
{
    int n; 
    
    printf("Informe um n�mero inteiro: ");
    scanf("%d", &n);
    
    par(n);
    
    return 0;
}
