# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a vari�vel. 01�

int idade;
char nome [200];

// Solicitando dados ao usu�rio. 02�

printf("  \n=== Tribunal Regional Eleitoral do Programador ===\n");
printf("Bem vindo ao TREP!\n");
printf("Informe seu nome: ");
scanf("%s",&nome);
printf("Informe sua idade: ");
scanf("%i",&idade);

// Limpa. 03�
 
 system ("cls || clear");


// Exibindo o resultado. 04�

printf("\n=== Tribunal Regional Eleitoral do Programador ===\n");
printf("Nome: %s\n",  nome);
printf("Idade: %i anos\n", idade);


// If e Else. 05�

if (idade <= 18 && idade >= 65 ){
	printf("Situa��o do cidad�o: ");
	printf("O cid�o n�o � obrigado a votar! ");
} else 
    printf("Situa��o do cidad�o: ");
	printf("O cidad�o � obrigado a votar! ");
	
return 0;	
}

// 01� Declarei a vari�veis char para nome e int para idade.
// 02� Pedir que o usu�rio informasse seu nome e sua idade.
// 03� Limpei para n�o aparecer novamente o bem vindo.
// 04� Exibindo o resultado final, como TREP o nome a idade e a situa��o do eleitor.
// 05� Usei o If e Else para fazer a condicional. 
// "OBS: N�O EST� INDO CORRETAMENTE N�O SEI SE � ULGUM ERRO OU FALHA DO PROGRAMA DEV C++". 
