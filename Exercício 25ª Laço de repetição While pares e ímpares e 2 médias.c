# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando as vari�veis.
int numero , pares = 0, impares = 0;
float soma = 0, media, mediapares, somapares = 0;
int i = 1, contador = 0;

// Solicitando dados ao usu�rio.
	printf("Digite o %d� n�mero:",i++);
	scanf("%i", &numero);
	
while(numero != 0){
   if(numero > 0){
   	  contador++;
   	  soma += numero;
   	  
   	  if(numero %2 == 0){
   	  	 pares++;
   	  	 somapares += numero; 
      }else {
      	 impares++;
	  }	
   }
   	  printf("Digite o %d� n�mero: ",i++);
	  scanf("%d", &numero);  
}

	if(contador == 0){
		
	}else {
      media = soma / (float) contador;
	  mediapares = somapares / (float) pares;
	  
	  printf("Quantidade de n�meros pares: %d\n", pares);
	  printf("Quantidade de n�meros �mpare: %d\n",impares);
	  printf("M�dia pares: %.1f\n",mediapares);
	  printf("M�dia geral: %.1f",media);		
	}
	
return 0;	
}
