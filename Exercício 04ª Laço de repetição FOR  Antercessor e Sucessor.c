# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando variável. 01ª

int numero, antecessor = 0, sucessor = 0;


// Solicitando dados ao usuário. 02ª

printf("Informe um número: ");
scanf("%i",&numero);


// Antecessor e Sucessor. 03ª

antecessor  = numero - 1;
sucessor    = numero + 1;


// Limpa 04ª
system("cls || clear");

// Exibindo Resultado. 05ª


printf("\n=== EXIBINDO RESULTADO ===\n");
printf("\n");
printf("Antercessor: %i\n", antecessor);
printf("Número: %i\n", numero);
printf("Sucessor: %i\n", sucessor);


return 0;	
}


/* 
01ª == Declarei a variável inteiro para poder ler um número inteiro.
02ª == Pedir ao usuário que informasse um número inteiro para poder executar o antercessor ou sucessor.
03ª == Declarei que antecessor tinha que receber número menos um, para poder aparecer no resultado final um número a menos do que o número escolhido.
 da mesma forma com o sucessor ele recebeu o número mais um, para poder mostrar um número a mais do número escolhido.
 04ª == limpar com "Sytem("cls|| clear"); para não aparecer duas vezes o número escolhido pelo usuário e deixar o resultado final mais apresentavel.
05ª == Exibindo o resultado final, nesse caso coloquei para aparecer primeiro o antecessor depois o número escolhido e por fim o sucessor. Ficar mais organizado na minha mente.



 */
