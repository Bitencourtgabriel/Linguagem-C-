# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main (){
setlocale(LC_ALL,"");

// Declarando as vari�vel 01�.

float nota;


// Solicitando dados ao usu�rio 02�.

do{
	printf("Digite sua nota: ");
	scanf("%f",&nota);
    
} while(nota <= 0 || nota >= 10);

// Exibindo Resultado 03�.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Sua nota �: %.1f",nota);
return 0;	
}
