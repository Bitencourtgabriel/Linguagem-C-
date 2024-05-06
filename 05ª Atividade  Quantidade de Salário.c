# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main (){
setlocale(LC_ALL,"");

// Declarando variáveis. 01ª

float salarioMinimo = 1412, salario, qtdSalario;


// Solicitando dados ao usuário. 02ª

printf("Digite o valor do seu salário:  ");
scanf("%f",&salario);


// Cálculo. 03ª

qtdSalario = salario / salarioMinimo;


// Exibindo Resultado. 04ª

printf("\n=== Exibindo Resultado ===\n");
printf("\n");
printf("Quantidade de Salário: %.1f \n", qtdSalario);
return 0;	
}
