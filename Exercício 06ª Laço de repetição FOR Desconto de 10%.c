# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando a vari�vel. 01�

float numero, valorFinal, desconto;


//  Solicitando dados ao usu�rio. 02�

printf("Digite um Valor: R$ ");
scanf("%f",&numero);


// c�lculo do desconto. 03�

desconto = numero * 0.1;
valorFinal = numero - desconto;


// Limpa 04�
system("cls || clear");


// Exibindo Resultado. 05�

printf("Valor escolhido: R$ %.2f \n",numero);
printf("Desconto de 10%: R$ %.2f \n",desconto);
printf("Valor j� com desconto: R$ %.2f\n", valorFinal);


return 0;	
}

// 01� == Declarei a vari�vel real para poder ler n�mero com casa quebrado.
// Coloquei dentro da vari�vel real as string n�mero, valorFinal e desconto.
// 02� == Solicitei do usu�rio um valor para poder ler.
// 03� == Fiz dois  c�lculo o primeiro foi de desconto onde n�mero x 0.1. "0.1" � equivalente a 10% de desconto.
// 04� == Usei o "System" ("cls || clear") para poder limpar as string anterior. "CLS || CLEAR"  serve para funcionar tanto no Windows e Linux.
// 05� == Mostrei o resultado final que � o valor escolhido pelo usu�rio, o valor do desconto e valor final j� com desconto.

