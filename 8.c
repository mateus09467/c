#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cabecalho(){
	system("cls|| clear"); //limpa tela
	printf("\n=========\n");
	printf("\n===Senai===\n");
	printf("\n=========\n");
	fflush(stdin);//limpao cache do input
	
}
int main(){
// declarando variaveis
	char login[200], loginCadrastrado[200]="Mateus";
	char senha[200], senhaCadrastrado[200]="123";
	
	///dados do usuario
	cabecalho();
	printf("Digite o lógin:");
	scanf("%s",&login);
	
	cabecalho();
	printf("Digite a senha:");
	scanf("%s",&senha);
	cabecalho();
	if (strcmp(login,loginCadrastrado)==0 && strcmp(senha,senhaCadrastrado)==0 ){ /// if == se  "strcmp +comparar se são iguais as dados" else ==seão  &&=i
		printf("bem vindo!");
	}
	else{
			printf("Acesso Negado");}
	
	
	}


