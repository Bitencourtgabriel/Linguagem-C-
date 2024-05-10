# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <locale.h>
# include <ctype.h>
# include <time.h>


int main (){
setlocale(LC_ALL,"portuguese");
	
// Declarando as variáveis 01ª.

float soma =0, notas, media;
int  contador = 1;	
char continua, menu;
	
// Solicitando dados ao usuário 02ª.

do {

	do {
		printf("Digite sua nota da %iª unidade: ", contador);
		scanf("%f", &notas);
		fflush(stdin);
		printf("\n");
		printf("Como você deseja continua? \n");
		printf("\n");
		printf("[S] - Inserir mais uma nota;\n");
		printf("[P] - Ver quantas notas foram inseridas;\n");
		printf("[N] - Calcular a média aritmática das notas informadas.\n");
		printf("Resposta: ");
		scanf("%s", &continua);
		continua = toupper(continua);
		printf("\n");
		
	switch (continua){
			
	case 'S': 
		soma += notas;
		contador++;
		system("cls || clear");
		break;
		
	case 'P':
		printf("Quantidade de notas inseridas : %i \n",contador);
		fflush(stdin);	
		printf("Como você deseja continua? \n");
		printf("\n");
		printf("[S] - Inserir mais uma nota;\n");
		printf("[N] - Calcular a média aritmática das notas informadas.\n");
		printf("Resposta: ");
		scanf("%s", &continua);
		system("cls || clear");
		break;
		
	case 'N':
		media = soma / (float) contador;
		printf("\n=== EXIBINDO RESULTADO ===\n");
		printf("Média: %.2f\n",media);
		break;			
        
//		system("cls || clear");	
	default: 
	    printf("Operação inválida! \n");
		system("cls || clear");
	} 	
		
	}while(continua == 'S' );
		
// Reiniciar 05?.
 
	 printf("\nSe você deseja continua com a opertação aperte a letra 'c'. ");
	 scanf("%s",&menu);
	 soma = 0;
	 contador = 1;
 
 system ("cls || clear");
 
} while (menu == 'c');
	
return 0;	
}
