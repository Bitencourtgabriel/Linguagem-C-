# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando Vari�vel.

int numero;


// Solicitando dados ao usu�ro.

printf("Informe um n�mero: ");
scanf("%i",&numero);


// Condicional IF e ELSE.

if (numero%2==0){
	printf("N�mero par");	
} else {
	printf("N�mero Impar");
}
	
return 0;	
}
