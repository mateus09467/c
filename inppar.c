#include<stdio.h>
#include<locale.h>

int main(){
	int i;
		setlocale(LC_ALL,"");
	printf("Números pares entre 1 e 20  \n");
	for(i=1;i<=20;i++){
		if(i%2!=0) {printf("\nNúmero:%d\n ",i);
		}
	}

	
return 0;	
	
}


