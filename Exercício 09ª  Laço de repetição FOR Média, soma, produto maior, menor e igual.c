# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>


int main (){
setlocale(LC_ALL,"");	

// Declarando vari�veis. 01�

int soma, produto, menorValor, maiorValor;
int numeroUm, numeroDois;
float media;


// Solicitando ao usu�rio dados. 02�

printf("Digite um valor: ");
scanf("%i",&numeroUm);

printf("Digite um valor: ");
scanf("%i",&numeroDois);


// C�lculo da soma, produto e m�dia. 03�

soma    = numeroUm + numeroDois;
produto = numeroUm * numeroDois;
media   = soma     / (float)  2;


// IF e ELSE. 04�

if (numeroUm > numeroDois){
	maiorValor = numeroUm;
	menorValor = numeroDois;
} else 
    maiorValor = numeroDois;
    menorValor = numeroUm;


// Exibindo Resultado. 05�

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("M�dia : %.2f \n", media);
printf("Soma: %i\n", soma);
printf("Produto: %i\n", produto);

// IF e ELSE 06�

if (numeroUm == numeroDois){
	printf("Os dois valores s�o iguais.");
} else {
	printf("Menor valor: %i\n", menorValor);
    printf("Maior valor: %i\n", maiorValor);
}
return 0;	
}


// 01� == Declarei tr�s vari�veis inteira para poder ler dois valores inteiro, ler a soma, o produto e o maior e menor valor.
// Tamb�m declarei uma vari�vel float que � "Real", para poder ler a m�dia.
// 02� == Solicitei dois valores ao usu�rio.
// 03� == Fiz o c�lculo de soma onde somei os dois valores, depois multipliquei os dois valores para poder achar o resultado do produto.
// E logo em seguida c�lculei o valor da m�dia soma dividido por dois.
// 04� == Usei o If e Else para fazer a condis�o de maior ou menor. Eu poderia ter usado tamb�m o swtch case.
// 05� == No resultado final mostrei em cada linha o resultado da m�dia, soma, produto e se era maio, menor ou igual.
// 06� == Tive que usar novamente o If e Else em baixo do resultado final para poder usar a condiconal igual.

