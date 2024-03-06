#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

float calculandometros(float metros){
	 return metros*100;
}


int main(){
setlocale(LC_ALL,"");

float metros, resultado;


///
 printf("escreva os metros:");
 scanf("%f",&metros);
 
 resultado =calculandometros(metros);
 
 printf("Resultado: %.1f cm.\n",resultado);
 
 return 0;
 
 ///
 

}

