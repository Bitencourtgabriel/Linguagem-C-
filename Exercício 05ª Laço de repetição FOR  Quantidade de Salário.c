# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando vari�veis. 01�

float salarioMinimo = 1412, salario, qtdSalario;


// Solicitando dados ao usu�rio. 02�

printf("Digite o valor do seu sal�rio:  ");
scanf("%f",&salario);


// C�lculo. 03�

qtdSalario = salario / salarioMinimo;


// Exibindo Resultado. 04�

printf("\n=== Exibindo Resultado ===\n");
printf("\n");
printf("Quantidade de Sal�rio: %.1f \n", qtdSalario);
return 0;	
}
