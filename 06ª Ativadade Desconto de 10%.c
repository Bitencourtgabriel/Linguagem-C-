# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a variável. 01ª

float numero, valorFinal, desconto;


//  Solicitando dados ao usuário. 02º

printf("Digite um Valor: R$ ");
scanf("%f",&numero);


// cálculo do desconto. 03ª

desconto = numero * 0.1;
valorFinal = numero - desconto;


// Limpa 04ª
system("cls || clear");


// Exibindo Resultado. 05ª

printf("Valor escolhido: R$ %.2f \n",numero);
printf("Desconto de 10%: R$ %.2f \n",desconto);
printf("Valor já com desconto: R$ %.2f\n", valorFinal);


return 0;	
}

// 01ª == Declarei a variável real para poder ler número com casa quebrado.
// Coloquei dentro da variável real as string número, valorFinal e desconto.
// 02ª == Solicitei do usuário um valor para poder ler.
// 03ª == Fiz dois  cálculo o primeiro foi de desconto onde número x 0.1. "0.1" é equivalente a 10% de desconto.
// 04ª == Usei o "System" ("cls || clear") para poder limpar as string anterior. "CLS || CLEAR"  serve para funcionar tanto no Windows e Linux.
// 05ª == Mostrei o resultado final que é o valor escolhido pelo usuário, o valor do desconto e valor final já com desconto.

