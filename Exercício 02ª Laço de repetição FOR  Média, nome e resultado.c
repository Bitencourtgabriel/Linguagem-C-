# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando vari�veis. 01�

 char nome [200];
 float soma, notas, media;
 float notaUm, notaDois, notaTres, notaQuatro;
 int idade;

// Solicitando dados ao usu�rio. 02�


 printf("Informe seu nome: ");
 scanf("%s",&nome);
 
 
 printf("Informe sua idade: ");
 scanf("%i",&idade);
 
printf("Informe sua nota da I unidade: ");
scanf("%f",&notaUm);

printf("Informe sua nota da II unidade: ");
scanf("%f",&notaDois);

printf("Informe sua nota da III unidade: ");
scanf("%f",&notaTres);

printf("Informe sua nota da IV unidade: ");
scanf("%f",&notaQuatro);

 //  C�lculo da m�dia. 03�
 
 soma = notaUm + notaDois + notaTres + notaQuatro;
 media = soma / 4;
 
 
// Limpa o termina Windows e Linux.04�

 system("cls || clear");
 
 
 // Exibindo Resultado. 05�
 
 printf("\n=== EXIBINDO RESULTADO ===\n");
 printf("\n");
 printf("Nome do Aluno: %s\n", nome);
 printf("Idade do aluno: %i anos \n",idade);
 printf("Nota da I unidade: %.1f\n",notaUm);
 printf("Nota da II unidade: %.1f\n", notaDois);
 printf("Nota da III unidade: %.1f\n", notaTres);
 printf("Nota da IV unidade: %.1f\n", notaQuatro);
 printf("M�dia do aluno: %.2f\n",media);
return 0;	
}
