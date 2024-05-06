#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main (){
setlocale(LC_ALL,"portuguese");

// Declaração de variável.
int i;
 float notas;
float media, somaNotas = 0;

// Solicitando dados ao usuário.

do{
	
	for(i = 0; i < 2; i++){

	printf("Digite sua nota: ");
	scanf("%i",&notas);
	
// Cálculo.

	somaNotas = somaNotas + notas;
	media = somaNotas / 2;
	}
} while(notas < 0 || notas > 10);

// Exibindo Resultado.
printf("Média do aluno: %.2f",media);
	
return 0;	
}
