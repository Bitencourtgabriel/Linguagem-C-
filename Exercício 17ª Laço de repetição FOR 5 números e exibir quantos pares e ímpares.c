# include <stdio.h>
# include <locale.h>

int main(){
setlocale(LC_ALL,"");

// Declarando vari�vel 01�.

int i;
int numero, pares = 0, impares = 0;

// Solicitando dados ao usu�rio 02�.

for (i = 0; i < 5; i++){
		printf("Digite o %d� n�mero: ",i + 1);
		scanf("%i",&numero);
		
		if (numero % 2 == 0){
			pares++;
		}
		else{
			impares++;
		}
	}
//	 Exibindo Resultado 03�.

printf("N�meros Pares: %i\n", pares);
printf("N�meros �mpares: %i", impares);

return0;
}

// 01� == Usei dois inteiros um para o la�o de repeti��o "For " representado como " i ", e usei outro inteiro para " n�mero ", "pares " e " �mpares ".
// 02� == Usei o la�o " For "para solicitar 5 n�meros ao usu�rio e tamb�m fiz o la�o de repeti��o " If e Else ", para ler quais s�o os n�meros " pares " e n�meros " �mpares ".
// 03� == Exibir a quantidade de n�meros " Pares " e n�meros " �mpares ".  
