/******************************************************************************
4. Elabore uma fun��o que receba tr�s lados de um tri�ngulo e verifique se ele � um
tri�ngulo ret�ngulo. Um tri�ngulo � ret�ngulo se o quadrado da hipotenusa (o maior
lado) for igual � soma dos quadrados dos outros dois lados. Caso o tri�ngulo seja
ret�ngulo, a fun��o dever� informar ao usu�rio que o tri�ngulo � ret�ngulo, caso
contr�rio, n�o dever� fazer nada. (0.1 ponto)
*******************************************************************************/
#include <stdio.h>
void tri(int n1,int n2,int n3){
    if (((n1 * n1) == (n2 * n2) + (n3 * n3)) || ((n2 * n2) == (n3 * n3) + (n1 * n1)) || ((n3 * n3) == (n1 * n1) + (n2 * n2))){
        printf("� um tri�ngulo ret�ngulo!");
    }
    else {
        printf("N�o � um tri�ngulo ret�ngulo!"); 
    }
}

int main()
{
    int n1, n2, n3; 
    
    printf("Digite um lado de um tri�ngulo: ");
    scanf("%d", &n1);
    printf("Digite um lado de um tri�ngulo: ");
    scanf("%d", &n2);
    printf("Digite um lado de um tri�ngulo: ");
    scanf("%d", &n3);
    
   tri(n1, n2, n3); 
   
   return 0;
}

