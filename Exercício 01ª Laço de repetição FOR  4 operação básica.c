# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declaração de variável.

float soma, subt, mult, div;
float numero;
int i;


// Solicitando dados ao usuário. 01ª

for (i = 1; i <= 2; i++){

    printf("Digite o %dº número:", i);
    scanf("%f",&numero);
}


// Cálculo das operação básica. 02ª

soma = numero + numero;
subt = numero - numero;
mult = numero * numero;
div  = numero / numero;


// Exibindo Resultado. 03ª 

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Soma: %.2f\n", soma);
printf("Subtração: %.2f\n", subt);
printf("Multiplicação: %.2f\n", mult);
printf("Divisão: %.2f", div);
		
return 0;	
}

/* 01ª == Usei o for para que podesse pedir ao usuário que digitasse dois número, 
facilitando a comprenção do código e também não deizando o código grande*/

/* 02ª == No cálculo tive que atribuir  as variáveis soma, subtração; multiplicação e divisão
 as números escolhido no FOR  para que possa mostrar o resultado.
*/

/* 03 == O resultado mostrar os dois números que o usuário escolheu
 e o resultado das operações básicas.
*/

