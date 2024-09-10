/******************************************************************************
3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
retornar 1. Caso contrário, não deve retornar nada. (0.1 ponto)
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
    
    printf("Digite um lado de um triângulo: ");
    scanf("%d", &n1);
    printf("Digite um lado de um triângulo: ");
    scanf("%d", &n2);
    printf("Digite um lado de um triângulo: ");
    scanf("%d", &n3);
    
    t = tri(n1 ,n2 ,n3);
    
    printf("%d\n", t); 
    
    if (tri(n1, n2, n3)){
        printf("O triângulo é valido!");
    }
    else {
         printf("O triângulo é invalido!"); 
    }
    return 0;
}
