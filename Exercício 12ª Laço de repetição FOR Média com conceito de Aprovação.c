 # include <stdio.h>
 # include <locale.h>
 # include <string.h>
 
 
 int main (){
 setlocale(LC_ALL,"");
 
 // Declara��o de vari�veis. 01�
 
 float soma = 0, media, notas;
 int i;
 char resultado[200];
 char nome[200];	
 	
 // Solicitando dados ao usu�rio. 02�
 
 printf("Digite seu nome: ");
 scanf("%s",&nome);
 
 for (i = 1; i <= 2; i++){


 	printf("Digite sua nota da %i� unidade: ", i);
 	scanf("%f",notas);
 
 
 // C�lculo Soma. 03�
 
 soma += notas;	
  }
  
 media = soma / 2;
 

// If e Else. 04�

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

 
 // Exibindo Resultado. 05�
 
 printf("\n=== EXIBINDO RESULTADO ===\n");
 printf("Nome: %s\n", nome);
 printf("Resultado: %.2f", resultado);
 printf("Te amo muito Sinha");
 return 0;	
 }
