# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando as variáveis.
int numero , pares = 0, impares = 0;
float soma = 0, media, mediapares, somapares = 0;
int i = 1, contador = 0, maior = 0, menor = 0;

// Solicitando dados ao usuário.
	printf("Digite o %dª número: ",i++);
	scanf("%i", &numero);
	maior = numero;
	menor = numero;
	
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
	  if (numero < menor)
		menor = numero;	
      if (numero > maior) 
        maior = numero;  	
   }
   	  printf("Digite o %dª número: ",i++);
	  scanf("%d", &numero);  
}

 

	if(contador == 0){
		
	}else {
      media = soma / (float) contador;
	  mediapares = somapares / (float) pares;
	  
	  printf("Quantidade de números pares: %d\n", pares);
	  printf("Quantidade de números ímpare: %d\n",impares);
	  printf("Maior número: %d\n",maior);
	  printf("Menor número: %d\n",menor);
	  printf("Média pares: %.1f\n",mediapares);
	  printf("Média geral: %.1f",media);		
	}
	
return 0;	
}
