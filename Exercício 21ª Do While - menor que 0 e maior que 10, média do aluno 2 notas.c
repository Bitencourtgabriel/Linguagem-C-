# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main (){
setlocale(LC_ALL,"");

// Declarando as variáveis.

float notas, soma = 0, media;
int i;
// Solicitando dados ao usuário.

for(i = 1; i < 2; i++){
do{
		
	printf("Digite a %dª nota: ",i);
	scanf("%f", &notas);

	if(notas < 0 || notas > 10){
		printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
	}
		
}while(notas < 0 || notas > 10);
soma += notas;
}

// Cálculo da media	
	
	media = soma / 2.0;

// Exibindo resultado.
printf("Soma: %i\n",soma);
printf("A média é: %.2f\n",media);	
	
return 0;	
}

