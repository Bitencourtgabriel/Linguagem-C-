# include <stdio.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando varável 01º.

int i;
int soma = 0, numero = 0;

// Solicitando dados ao usuário 02º.

for (i = 1; i <= 5; i++){
		printf("Digite o %dº número: ", i);
		scanf("%i",&numero);
		soma = soma + numero;
}

// Exibindo Resultado 03º.

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Soma dos números: %i\n", soma);

return 0;
}

// 01º == Usei duas variáveis inteiras uma para o laço de repetição == " i " e outra para " soma " e " número ".
// 02ª == Usei o laço " For " para pedir 5 números ao usuário, dentro do laço " For " fiz a soma dos 5 números que o enuciado.
// 03º == Por fim eu exibir  a soma dos 5 números somados.
