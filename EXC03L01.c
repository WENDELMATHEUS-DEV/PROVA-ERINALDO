/******************************************************************************
3. Crie uma fun��o que receba tr�s lados de um tri�ngulo e verifique se esses lados
formam um tri�ngulo v�lido. Um tri�ngulo � v�lido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o tri�ngulo seja v�lido, a fun��o dever�
retornar 1. Caso contr�rio, n�o deve retornar nada. (0.1 ponto)
*******************************************************************************/
#include <stdio.h>
int tri(int n1,int n2,int n3){
    if (n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2){
        return 1;  
    } else {
    return 0;
    }
}

int main()
{
    int n1, n2, n3, t; 
    
    printf("Digite um lado de um tri�ngulo: ");
    scanf("%d", &n1);
    printf("Digite um lado de um tri�ngulo: ");
    scanf("%d", &n2);
    printf("Digite um lado de um tri�ngulo: ");
    scanf("%d", &n3);
    
    t = tri(n1 ,n2 ,n3);
    
    printf("%d\n", t); 
    
    if (tri(n1, n2, n3)){
        printf("O tri�ngulo � valido!");
    }
    else {
         printf("O tri�ngulo � invalido!"); 
    }
    return 0;
}
