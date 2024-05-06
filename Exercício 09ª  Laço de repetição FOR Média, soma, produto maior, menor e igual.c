# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>


int main (){
setlocale(LC_ALL,"");	

// Declarando variáveis. 01ª

int soma, produto, menorValor, maiorValor;
int numeroUm, numeroDois;
float media;


// Solicitando ao usuário dados. 02ª

printf("Digite um valor: ");
scanf("%i",&numeroUm);

printf("Digite um valor: ");
scanf("%i",&numeroDois);


// Cálculo da soma, produto e média. 03º

soma    = numeroUm + numeroDois;
produto = numeroUm * numeroDois;
media   = soma     / (float)  2;


// IF e ELSE. 04ª

if (numeroUm > numeroDois){
	maiorValor = numeroUm;
	menorValor = numeroDois;
} else 
    maiorValor = numeroDois;
    menorValor = numeroUm;


// Exibindo Resultado. 05ª

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Média : %.2f \n", media);
printf("Soma: %i\n", soma);
printf("Produto: %i\n", produto);

// IF e ELSE 06ª

if (numeroUm == numeroDois){
	printf("Os dois valores são iguais.");
} else {
	printf("Menor valor: %i\n", menorValor);
    printf("Maior valor: %i\n", maiorValor);
}
return 0;	
}


// 01ª == Declarei três variáveis inteira para poder ler dois valores inteiro, ler a soma, o produto e o maior e menor valor.
// Também declarei uma variável float que é "Real", para poder ler a média.
// 02ª == Solicitei dois valores ao usuário.
// 03ª == Fiz o cálculo de soma onde somei os dois valores, depois multipliquei os dois valores para poder achar o resultado do produto.
// E logo em seguida cálculei o valor da média soma dividido por dois.
// 04ª == Usei o If e Else para fazer a condisão de maior ou menor. Eu poderia ter usado também o swtch case.
// 05ª == No resultado final mostrei em cada linha o resultado da média, soma, produto e se era maio, menor ou igual.
// 06ª == Tive que usar novamente o If e Else em baixo do resultado final para poder usar a condiconal igual.

