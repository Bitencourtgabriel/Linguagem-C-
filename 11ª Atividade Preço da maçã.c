 # include <stdio.h>
 # include <stdlib.h>
 # include <string.h>
 # include <locale.h>
 
 
 int main (){
 setlocale(LC_ALL,"");
 
 // Declarando as variáveis. 01ª
 
 int quantidade;
 float precoMaca, precoTotal;
 
 
 // Solicitando dados ao usuário. 02ª
 
 printf("Informe quantas maçãs você adquiriu: ");
 scanf("%f",&quantidade);
 
 
 // If e Else. 03ª
 
 if (quantidade <= 12){
 	precoMaca = 1.30;
 } else {
 	precoMaca = 1.00;
 }
 
 
 // Cálculo.
 
 precoTotal = precoMaca * quantidade;
 
 
 // Exibindo Resultado Final. 04ª
 
 printf("\n=== EXIBINDO RESULTADO ===\n");
 printf("Quantidade de maçãs: %i\n", quantidade);
 printf("Preço da maçã: %.2f\n",precoMaca);
 printf("Preço total: %.2f",precoTotal);
 
 return 0; 	
 }
