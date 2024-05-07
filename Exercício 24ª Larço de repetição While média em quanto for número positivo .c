# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando as variáveis.
float notas, soma = 0;
float media, contador=0;
int i = 1;
// Solicitandos dados ao usuário.
while (notas >= 0){
	printf("Digite a %dª número: ",i++);
	scanf("%f", &notas);
	if(notas >= 0){
	
	soma += notas;
	contador++;	
	 }
	}	
	

if (contador > 0){
// Cálculo da média.	
	media = soma / (float) contador;
// Exibindo Resultado.	
	printf("A média: %.1f",media); 
	}	
return 0;	
}
