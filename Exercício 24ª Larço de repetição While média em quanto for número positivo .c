# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando as vari�veis.
float notas, soma = 0;
float media, contador=0;
int i = 1;
// Solicitandos dados ao usu�rio.
while (notas >= 0){
	printf("Digite a %d� n�mero: ",i++);
	scanf("%f", &notas);
	if(notas >= 0){
	
	soma += notas;
	contador++;	
	 }
	}	
	

if (contador > 0){
// C�lculo da m�dia.	
	media = soma / (float) contador;
// Exibindo Resultado.	
	printf("A m�dia: %.1f",media); 
	}	
return 0;	
}
