 # include <stdio.h>
 # include <locale.h>
 # include <string.h>
 
 
 int main (){
 setlocale(LC_ALL,"");
 
 // Declaração de variáveis. 01ª
 
 float soma = 0, media, notas;
 int i;
 char resultado[200];
 char nome[200];	
 	
 // Solicitando dados ao usuário. 02ª
 
 printf("Digite seu nome: ");
 scanf("%s",&nome);
 
 for (i = 1; i <= 2; i++){


 	printf("Digite sua nota da %iª unidade: ", i);
 	scanf("%f",notas);
 
 
 // Cálculo Soma. 03ª
 
 soma += notas;	
  }
  
 media = soma / 2;
 

// If e Else. 04ª

if (media >= 9){
	strcpy (resultado," Conceito A"  );
	printf("Aprovado!");
} else if (media >= 7.5  || media <= 9 ){
	strcpy (resultado, "Conceito B");
	printf("Aprovado!");
} else if (media >= 6 || media < 7.5){
	strcpy(resultado,"Conceito C");
	printf("Aprovado!");
} else if (media >= 4 || media <= 6){
	strcpy(resultado,"Conceito D");
	printf("Reprovado!");
}else if (media < 4)
	strcpy(resultado,"conceito E");
	printf("Reprovado");

 
 // Exibindo Resultado. 05ª
 
 printf("\n=== EXIBINDO RESULTADO ===\n");
 printf("Nome: %s\n", nome);
 printf("Resultado: %.2f", resultado);
 printf("Te amo muito Sinha");
 return 0;	
 }
