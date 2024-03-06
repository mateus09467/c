#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


 float inflacionarPreco ( float preco){
 	float novoPreco;
 	
 	novoPreco=preco<100 ? preco * 1.1 :  preco*1.2;
 	
 	return novoPreco;
	 

}
 
 int main(){
 
 float precod, reslutado;
 
 setlocale(LC_ALL,"");

 
 printf("escreva o preço:");
 scanf("%f",&precod);
 
 reslutado=inflacionarPreco(precod);
 
 printf("Resultado: %.2f r$.\n",reslutado);
 
 return 0;
 
 }
