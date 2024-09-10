//14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
//turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
//para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
//cada turno e um erro para entradas inválidas.


#include <stdio.h>


int mensagem (int turno){
	int m;
	if (turno == 1){
		return printf("Bom dia, Seja bem vindo!");
	}else if (turno == 2){
		return printf("Boa tarde, Seja bem vindo!");
	}else{
		return printf("Boa noite, Seja bem vindo!");
	}
		return m;
}

int main () {
	
	int turno, msg;
	
	printf("Informe o seu turno 1- Manha, 2- Tarde, 3- Noite: ");
	scanf("%d", &turno);
	
	msg = mensagem(turno);
	
	return 0;
}
