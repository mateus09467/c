 #include <locale.h>
 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h> 
 
 char* verificarParOuInpar(int numero){
 	char resposta[200];
 	if(numero % 2 == 0){
 		strcpy(resposta,"Par.");	
	 }else {
	 	strcpy(resposta,"Inpar");
	 }
	return resposta;
 }
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	int numero;
 	char resultado[200];
 	
 	printf("Digite um Número");
 	scanf("%i" ,&numero);
 	
 	strcpy(resultado,verificarparouinpar(numero));
 	
 	prinf("Resultado: %s \n" ,resultado);
 	
 	return 0;
	 }

 
 
 
