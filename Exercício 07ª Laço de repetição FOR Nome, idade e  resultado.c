# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando vari�veis. 01�

char nome [100];
int idade;
float notaUm, notaDois, notaTres, media;


// Solicitando dados ao usu�rio. 02�

printf("Informe seu nome: ");
scanf("%s",&nome);

printf("Informe sua idade: ");
scanf("%i",&idade);
     
printf("Informe a nota da I unidade: ");
scanf ("%f",&notaUm);
     
printf("Informe a nota da II unidade: ");
scanf ("%f",&notaDois);
     
printf("Informe a nota da III unidade:  ");
scanf ("%f",&notaTres);	



// C�lculo. 03�

media = (notaUm + notaDois + notaTres) / 3;


// Limpa. 04�

system ("cls || clear");

// Exibindo Resultado Final. 05�

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Nome do aluno: %s\n",nome);
printf("Idade do aluno: %i anos\n",idade);

//  Condicional IF e ELSE. 06�

if (media >= 7.0){
	printf("Aluno est� aprovado!");
}else{
	printf("Aluno est� reprovado!");
}

return 0;	
}

// 01� == Declarei a vari�veis nome, idade e notas da 1� a 3� unidade e m�dia.
// 02� == Solicitei que o usu�rio informasse seu nome, idade, � suas notas da 1� a 3� unidade.
// 03� == Fiz o c�lculo da m�dia somando as tr�s notas e dividindo por 3.
// 04� == Usei o System ("cls || clear") para limpar todas as informa��es anterior para n�o coincidir com o resultado final.
// A siglas CLS & CLEAR  s�o usada para poder usar perfeitamente sem erro no Windons e Linux.
// 05� == No Resultado final coloquei para aparecer o nome do usu�rio sua idade com anos no final do valor informado
// e coloquei o IF e ELSE por �ltimo.
// 06� == Usei o IF e ElSE por �ltimo para aparecer se o aluno vai ser aprovado ou n�o. Se eu colocasse antes do resultado final o resultado 
// ia ficar em cima do nome e idade e ia contrar  o que o exerc�cio pediu.
