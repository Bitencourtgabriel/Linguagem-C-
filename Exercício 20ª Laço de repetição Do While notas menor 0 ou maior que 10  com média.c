#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
setlocale(LC_ALL,"portuguese");

// Declara��o de vari�vel.
int i;
 float notas;
float media, somaNotas = 0;

// Solicitando dados ao usu�rio.

do{
	
	for(i = 0; i < 2; i++){

	printf("Digite sua nota: ");
	scanf("%i",&notas);
	
// C�lculo.

	somaNotas = somaNotas + notas;
	media = somaNotas / 2;
	}
} while(notas < 0 || notas > 10);

// Exibindo Resultado.
printf("M�dia do aluno: %.2f",media);
	
return 0;	
}
