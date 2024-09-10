/******************************************************************************
13. Crie um programa que simule uma calculadora simples. O programa deve
permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
multiplicação e divisão. O usuário deve informar a operação desejada e dois
números. O programa deve realizar a operação selecionada e exibir o resultado.
Caso a operação não seja reconhecida, o programa deve informar um erro. (0.2
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
        printf("OPERAÇÃO INVÁLIDA!!!");
    return m;
}
    
int main()
{
    float n1, n2, result; 
    int op; 
    
    printf("Escolha a operação desejada (1 - soma, 2 - multiplicação, 3 - divisão, 4 - subtração): ");
    scanf(" %d", &op);
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    
    result = oper(n1, n2, op); 
    
    if (op >= 1 && op <= 4) {
    printf("O resultado é: %.2f\n", result);
    return 0;
}
}
