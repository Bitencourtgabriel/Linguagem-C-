# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a vari�vel. 01�

int numero, i;
	
	
// Solicitando dados ao usu�rio. 02�
	
printf("Digite um n�mero: ");
scanf("%i",&numero);
	
system("cls || clear");

// Exibindo resultado antes da resposta. 03�

printf("\n=== EXIBINDO RESULTADO ===\n");

// Formula para fazer a multiplica��o. 04�

for (i = 1; i <= 10; i++){
	printf("%d x %d = %d \n",numero, i, i * numero);
		
}
	
return 0;	
}

// 01� == Usei a vari�vel inteira para armazenar o n�mero que o usu�rio vai escolher,
// e coloquei a variav�l " i " para ser igual a um. Isso vai ajudar na hora do contador.
// 02� == Usei o system (cls || clear) para limpar os dados pedido em cima.
// 03� == coloquei " EXIBIR RESULTADO ", para mostrar antes do calculo da multiplica��o.
// 04� == Usei a f�rmula " For " para ajudar a fazer a repeti��o nesse caso eu informei que,
// o limite de calculo � at� 10, logo que o usu�rio digitar um n�mero o programa vai guardar esse n�mero e logo em seguida vai multiplicar at� 10.


