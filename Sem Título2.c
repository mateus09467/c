#include <stdio.h>

void cabecalho(){
	system("cls || clear"); 
	printf("\n===Senai===\n");
	fflush(stdin);//limpao cache do inpu
}

float somar (float n1,float n2) {
	float soma;
	soma= (n1 + n2);
	return soma;
}

float subtrar (float n1,float n2) {
	float subtracao;
	subtracao = (n1 - n2);
	return subtracao;
}

float mutiplicando (float n1,float n2) {
	float mutiplicacao;
	mutiplicacao= (n1 * n2);
	return mutiplicacao;
}


float dividindo (float n1,float n2) {
	float divisao;
	divisao= (n1 / n2);
	return divisao;
}

int main(){
	float primeironumero,segundonumero,soma,subtracao,mutiplicacao,divisao;
	
	cabecalho();
	printf("Escreva o primeiro Numero:");
	scanf("%f" ,&primeironumero );
	
	fflush(stdin); 
	
	cabecalho();
	printf("Escreva o primeiro Numero:");
	scanf("%f" ,&segundonumero );
	
	soma = somar (primeironumero , segundonumero);
	subtracao = subtrar (primeironumero , segundonumero);
	mutiplicacao = mutiplicando (primeironumero , segundonumero);
	divisao = dividindo (primeironumero , segundonumero);
	
	
	cabecalho();
	
	printf("\n soma: %.1f",soma);
		printf("\n subtracao: %.1f",subtracao);
			printf("\n mutiplicacao: %.1f",mutiplicacao);
				printf("\n divisao: %.1f",divisao);
	
	return 0;
	
}

