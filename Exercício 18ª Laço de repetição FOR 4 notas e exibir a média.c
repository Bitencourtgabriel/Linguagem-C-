# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declara��o de vari�vel 01�.

int i;
float media, soma, nota;

// Solicitando dados ao usu�rio 02�.

for (i = 0; i < 4; i++){
	printf("Informe  sua nota da %d� unidade: ", i + 1);
	scanf("%f",&nota);
	soma = soma + nota;
	
}

media = soma / i;

// Exibindo Resultado 03�.

printf("M�dia  do aluno: %.2f", media);
	
return 0;	
}
