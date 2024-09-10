/******************************************************************************
13. Crie um programa que simule uma calculadora simples. O programa deve
permitir ao usu�rio escolher entre quatro opera��es aritm�ticas: soma, subtra��o,
multiplica��o e divis�o. O usu�rio deve informar a opera��o desejada e dois
n�meros. O programa deve realizar a opera��o selecionada e exibir o resultado.
Caso a opera��o n�o seja reconhecida, o programa deve informar um erro. (0.2
ponto)
*******************************************************************************/
#include <stdio.h>



float oper(float n1, float n2, int op){
    float m;
    if (op == 1) {
        m = n1 + n2;
    } else if (op == 2) {
        m = n1 * n2;
    } else if (op == 3) {
        m = n1 / n2;
    } else if (op == 4) {
        m = n1 - n2;
    } else 
        printf("OPERA��O INV�LIDA!!!");
    return m;
}
    
int main()
{
    float n1, n2, result; 
    int op; 
    
    printf("Escolha a opera��o desejada (1 - soma, 2 - multiplica��o, 3 - divis�o, 4 - subtra��o): ");
    scanf(" %d", &op);
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);
    
    result = oper(n1, n2, op); 
    
    if (op >= 1 && op <= 4) {
    printf("O resultado �: %.2f\n", result);
    return 0;
}
}
