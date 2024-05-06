# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declaração de variável 01ª.

int i;
float media, soma, nota;

// Solicitando dados ao usuário 02ª.

for (i = 0; i < 4; i++){
	printf("Informe  sua nota da %dº unidade: ", i + 1);
	scanf("%f",&nota);
	soma = soma + nota;
	
}

media = soma / i;

// Exibindo Resultado 03ª.

printf("Média  do aluno: %.2f", media);
	
return 0;	
}
