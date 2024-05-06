# include <stdio.h>
# include <locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando variável 01ª.

int i;
int numero, pares = 0, impares = 0;

// Solicitando dados ao usuário 02ª.

for (i = 0; i < 5; i++){
		printf("Digite o %dª número: ",i + 1);
		scanf("%i",&numero);
		
		if (numero % 2 == 0){
			pares++;
		}
		else{
			impares++;
		}
	}
//	 Exibindo Resultado 03ª.

printf("Números Pares: %i\n", pares);
printf("Números Ímpares: %i", impares);

return0;
}

// 01ª == Usei dois inteiros um para o laço de repetição "For " representado como " i ", e usei outro inteiro para " número ", "pares " e " ímpares ".
// 02ª == Usei o laço " For "para solicitar 5 números ao usuário e também fiz o laço de repetição " If e Else ", para ler quais são os números " pares " e números " ímpares ".
// 03ª == Exibir a quantidade de números " Pares " e números " Ímpares ".  
