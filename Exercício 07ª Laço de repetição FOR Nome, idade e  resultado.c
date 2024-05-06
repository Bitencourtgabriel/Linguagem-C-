# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando variáveis. 01ª

char nome [100];
int idade;
float notaUm, notaDois, notaTres, media;


// Solicitando dados ao usuário. 02ª

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



// Cálculo. 03ª

media = (notaUm + notaDois + notaTres) / 3;


// Limpa. 04ª

system ("cls || clear");

// Exibindo Resultado Final. 05ª

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Nome do aluno: %s\n",nome);
printf("Idade do aluno: %i anos\n",idade);

//  Condicional IF e ELSE. 06ª

if (media >= 7.0){
	printf("Aluno está aprovado!");
}else{
	printf("Aluno está reprovado!");
}

return 0;	
}

// 01ª == Declarei a variáveis nome, idade e notas da 1º a 3º unidade e média.
// 02ª == Solicitei que o usuário informasse seu nome, idade, é suas notas da 1º a 3º unidade.
// 03ª == Fiz o cálculo da média somando as três notas e dividindo por 3.
// 04ª == Usei o System ("cls || clear") para limpar todas as informações anterior para não coincidir com o resultado final.
// A siglas CLS & CLEAR  são usada para poder usar perfeitamente sem erro no Windons e Linux.
// 05ª == No Resultado final coloquei para aparecer o nome do usuário sua idade com anos no final do valor informado
// e coloquei o IF e ELSE por último.
// 06ª == Usei o IF e ElSE por último para aparecer se o aluno vai ser aprovado ou não. Se eu colocasse antes do resultado final o resultado 
// ia ficar em cima do nome e idade e ia contrar  o que o exercício pediu.
