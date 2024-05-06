# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main (){
setlocale(LC_ALL,"");

// Declarando as variável 01º.

float nota;


// Solicitando dados ao usuário 02º.

do{
	printf("Digite sua nota: ");
	scanf("%f",&nota);
    
} while(nota <= 0 || nota >= 10);

// Exibindo Resultado 03º.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Sua nota é: %.1f",nota);
return 0;	
}
