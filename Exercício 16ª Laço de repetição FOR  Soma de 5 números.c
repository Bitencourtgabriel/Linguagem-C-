# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando var�vel 01�.

int i;
int soma = 0, numero = 0;

// Solicitando dados ao usu�rio 02�.

for (i = 1; i <= 5; i++){
		printf("Digite o %d� n�mero: ", i);
		scanf("%i",&numero);
		soma = soma + numero;
}

// Exibindo Resultado 03�.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Soma dos n�meros: %i\n", soma);

return 0;
}

// 01� == Usei duas vari�veis inteiras uma para o la�o de repeti��o == " i " e outra para " soma " e " n�mero ".
// 02� == Usei o la�o " For " para pedir 5 n�meros ao usu�rio, dentro do la�o " For " fiz a soma dos 5 n�meros que o enuciado.
// 03� == Por fim eu exibir  a soma dos 5 n�meros somados.
