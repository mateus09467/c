#include<stdio.h>
#include<locale.h>

int main(){
	int i;
		setlocale(LC_ALL,"");
	printf("N�meros pares entre 100 e 120  \n");
	for(i=1;i<=20;i++){
		if(i%2!=0) {printf("\nN�mero:%d\n ",i);
		}
	}

	
return 0;	
	
}


