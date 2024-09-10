//15. Crie um programa que converta um valor monetario entre tres moedas: real
//(BRL), dolar (USD) e euro (EUR). O usuario deve informar a moeda de origem, a
//moeda de destino e o valor a ser convertido. As taxas de conversao sao as
//seguintes:
//Åú 1 USD = 5.30 BRL
//Åú 1 EUR = 6.20 BRL
//Åú 1 BRL = 0.19 USD
//Åú 1 BRL = 0.16 EUR



#include<stdio.h>



float converte(float valor, char moeda1[], char moeda2[]){
		float m;
	if(strcmp(moeda1,"BRL") == 0 && strcmp(moeda2,"EUR") == 0){
		m = valor * 0.16;
	}else if (strcmp(moeda1,"BRL") == 0 && strcmp(moeda2,"USD") == 0){
		m = valor * 0.19;
	}else if (strcmp(moeda1,"USD") == 0 && strcmp(moeda2,"BRL") == 0){
		m = valor / 5.30;
	}else if (strcmp(moeda1,"EUR") == 0 && strcmp(moeda2,"BRL") == 0){
		m = valor / 6.20;
	}else{
		return printf("DADOS INVALIDOS");
	}
		return m;
}

float main (){
	
	float valor, conversao;
	char moeda1[10], moeda2[10];
	
	printf("Informe a moeda de origem para conversao: ");
	scanf("%s", &moeda1);
	printf("Informe a moeda de destino para conversao: ");
	scanf("%s", &moeda2);
	printf("Informe o desejado a ser convertido: ");
	scanf("%f", &valor);
	
	conversao = converte(valor, moeda1, moeda2);
	
	printf("\n A moeda de origem e: %s \n A moeda de destino e: %s \n E o valor da conversao e de: %.2f", moeda1, moeda2, conversao);
	
	return 0;
}
