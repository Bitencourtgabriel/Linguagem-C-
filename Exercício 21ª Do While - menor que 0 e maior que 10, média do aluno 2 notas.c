# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main (){
setlocale(LC_ALL,"");

// Declarando as vari�veis.

float notas, soma = 0, media;
int i;
// Solicitando dados ao usu�rio.

for(i = 1; i < 2; i++){
do{
		
	printf("Digite a %d� nota: ",i);
	scanf("%f", &notas);

	if(notas < 0 || notas > 10){
		printf("Nota inv�lida. Digite uma nota entre 0 e 10.\n");
	}
		
}while(notas < 0 || notas > 10);
soma += notas;
}

// C�lculo da media	
	
	media = soma / 2.0;

// Exibindo resultado.
printf("Soma: %i\n",soma);
printf("A m�dia �: %.2f\n",media);	
	
return 0;	
}

