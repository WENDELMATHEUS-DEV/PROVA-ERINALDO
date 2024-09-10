//16. Desenvolva um programa que classifique o desempenho academico de um
//aluno com base em sua nota final. A nota deve ser informada pelo usuario e
//classificada da seguinte forma:
//œ A (nota >= 9.0)
//œ B (nota >= 7.0 e < 9.0)
//œ C (nota >= 5.0 e < 7.0)
//œ D (nota < 5.0)
//O programa deve exibir a classificacao correspondente. Se a nota estiver fora do
//intervalo de 0 a 10, o programa deve informar um erro.


#include <stdio.h>


float verifica(float nota){
	
	if(nota >= 9.0 && nota <= 10){
		return printf("A");
		}else if (nota >= 7.0 && nota <9.0){
			return printf("B");
		}else if (nota >= 5.0 && nota < 7.0){
			return printf("C");
		}else if (nota < 5.0){
			return printf("D");
		}else{
			return printf("ERRO");
		}
		return 0;
	}

float main () {
	
	float nota, desempenho;
	
	printf("Informe a nota do aluno :");
	scanf("%f", &nota);
	
	printf("A classificacao e ", desempenho);
	
	
	desempenho = verifica(nota);
	
	return 0;
}


