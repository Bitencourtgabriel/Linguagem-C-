# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declara��o de vari�vel.

float soma, subt, mult, div;
float numero;
int i;


// Solicitando dados ao usu�rio. 01�

for (i = 1; i <= 2; i++){

    printf("Digite o %d� n�mero:", i);
    scanf("%f",&numero);
}


// C�lculo das opera��o b�sica. 02�

soma = numero + numero;
subt = numero - numero;
mult = numero * numero;
div  = numero / numero;


// Exibindo Resultado. 03� 

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Soma: %.2f\n", soma);
printf("Subtra��o: %.2f\n", subt);
printf("Multiplica��o: %.2f\n", mult);
printf("Divis�o: %.2f", div);
		
return 0;	
}

/* 01� == Usei o for para que podesse pedir ao usu�rio que digitasse dois n�mero, 
facilitando a compren��o do c�digo e tamb�m n�o deizando o c�digo grande*/

/* 02� == No c�lculo tive que atribuir  as vari�veis soma, subtra��o; multiplica��o e divis�o
 as n�meros escolhido no FOR  para que possa mostrar o resultado.
*/

/* 03 == O resultado mostrar os dois n�meros que o usu�rio escolheu
 e o resultado das opera��es b�sicas.
*/

