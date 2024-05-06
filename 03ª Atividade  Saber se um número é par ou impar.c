# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando Variável.

int numero;


// Solicitando dados ao usuáro.

printf("Informe um número: ");
scanf("%i",&numero);


// Condicional IF e ELSE.

if (numero%2==0){
	printf("Número par");	
} else {
	printf("Número Impar");
}
	
return 0;	
}
