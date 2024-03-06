#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verificarparouinpar(int numero){
	if(numero %2==0){
		printf("Par."); 
		} else {
			printf("Inpar.");
		}
}

int main(){
	setlocale(LC_ALL,"");
	int numero;
	
	printf("Digite o número:");
	scanf("%i" ,&numero);
	
	verificarparouinpar(numero);
	
	return 0;
}
