# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a variável. 01ª

int idade;
char nome [200];

// Solicitando dados ao usuário. 02ª

printf("  \n=== Tribunal Regional Eleitoral do Programador ===\n");
printf("Bem vindo ao TREP!\n");
printf("Informe seu nome: ");
scanf("%s",&nome);
printf("Informe sua idade: ");
scanf("%i",&idade);

// Limpa. 03ª
 
 system ("cls || clear");


// Exibindo o resultado. 04ª

printf("\n=== Tribunal Regional Eleitoral do Programador ===\n");
printf("Nome: %s\n",  nome);
printf("Idade: %i anos\n", idade);


// If e Else. 05ª

if (idade <= 18 && idade >= 65 ){
	printf("Situação do cidadão: ");
	printf("O cidão não é obrigado a votar! ");
} else 
    printf("Situação do cidadão: ");
	printf("O cidadão é obrigado a votar! ");
	
return 0;	
}

// 01ª Declarei a variáveis char para nome e int para idade.
// 02ª Pedir que o usuário informasse seu nome e sua idade.
// 03ª Limpei para não aparecer novamente o bem vindo.
// 04ª Exibindo o resultado final, como TREP o nome a idade e a situação do eleitor.
// 05ª Usei o If e Else para fazer a condicional. 
// "OBS: NÃO ESTÁ INDO CORRETAMENTE NÃO SEI SE É ULGUM ERRO OU FALHA DO PROGRAMA DEV C++". 
