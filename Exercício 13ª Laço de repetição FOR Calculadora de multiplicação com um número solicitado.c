# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a variável. 01º

int numero, i;
	
	
// Solicitando dados ao usuário. 02º
	
printf("Digite um número: ");
scanf("%i",&numero);
	
system("cls || clear");

// Exibindo resultado antes da resposta. 03ª

printf("\n=== EXIBINDO RESULTADO ===\n");

// Formula para fazer a multiplicação. 04º

for (i = 1; i <= 10; i++){
	printf("%d x %d = %d \n",numero, i, i * numero);
		
}
	
return 0;	
}

// 01ª == Usei a variável inteira para armazenar o número que o usuário vai escolher,
// e coloquei a variavél " i " para ser igual a um. Isso vai ajudar na hora do contador.
// 02ª == Usei o system (cls || clear) para limpar os dados pedido em cima.
// 03ª == coloquei " EXIBIR RESULTADO ", para mostrar antes do calculo da multiplicação.
// 04ª == Usei a fórmula " For " para ajudar a fazer a repetição nesse caso eu informei que,
// o limite de calculo é até 10, logo que o usuário digitar um número o programa vai guardar esse número e logo em seguida vai multiplicar até 10.


