#include<stdio.h>
#include<locale.h>

void verificarPositivoOuNegativo(numero){
	if(numero==0){
		printf("Zero é´neutro.");
	}else if (numero>0){
		printf("Positivo");
	} else {
		printf("Negativo");
	}
}
int main(){
	setlocale(LC_ALL,"");
	
		int numero;
	printf("Digite um número:");
	scanf("%i",&numero);
	
	verificarPositivoOuNegativo(numero);
}
