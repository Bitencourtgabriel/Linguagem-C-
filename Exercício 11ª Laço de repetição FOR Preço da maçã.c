 # include <stdio.h>
 # include <stdlib.h>
 # include <string.h>
 # include <locale.h>
 
 
 int main (){
 setlocale(LC_ALL,"");
 
 // Declarando as vari�veis. 01�
 
 int quantidade;
 float precoMaca, precoTotal;
 
 
 // Solicitando dados ao usu�rio. 02�
 
 printf("Informe quantas ma��s voc� adquiriu: ");
 scanf("%f",&quantidade);
 
 
 // If e Else. 03�
 
 if (quantidade <= 12){
 	precoMaca = 1.30;
 } else {
 	precoMaca = 1.00;
 }
 
 
 // C�lculo.
 
 precoTotal = precoMaca * quantidade;
 
 
 // Exibindo Resultado Final. 04�
 
 printf("\n=== EXIBINDO RESULTADO ===\n");
 printf("Quantidade de ma��s: %i\n", quantidade);
 printf("Pre�o da ma��: %.2f\n",precoMaca);
 printf("Pre�o total: %.2f",precoTotal);
 
 return 0; 	
 }
