# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


int main(){
setlocale(LC_ALL,"");

// Declarando vari�vel. 01�

int numero, antecessor = 0, sucessor = 0;


// Solicitando dados ao usu�rio. 02�

printf("Informe um n�mero: ");
scanf("%i",&numero);


// Antecessor e Sucessor. 03�

antecessor  = numero - 1;
sucessor    = numero + 1;


// Limpa 04�
system("cls || clear");

// Exibindo Resultado. 05�


printf("\n=== EXIBINDO RESULTADO ===\n");
printf("\n");
printf("Antercessor: %i\n", antecessor);
printf("N�mero: %i\n", numero);
printf("Sucessor: %i\n", sucessor);


return 0;	
}


/* 
01� == Declarei a vari�vel inteiro para poder ler um n�mero inteiro.
02� == Pedir ao usu�rio que informasse um n�mero inteiro para poder executar o antercessor ou sucessor.
03� == Declarei que antecessor tinha que receber n�mero menos um, para poder aparecer no resultado final um n�mero a menos do que o n�mero escolhido.
 da mesma forma com o sucessor ele recebeu o n�mero mais um, para poder mostrar um n�mero a mais do n�mero escolhido.
 04� == limpar com "Sytem("cls|| clear"); para n�o aparecer duas vezes o n�mero escolhido pelo usu�rio e deixar o resultado final mais apresentavel.
05� == Exibindo o resultado final, nesse caso coloquei para aparecer primeiro o antecessor depois o n�mero escolhido e por fim o sucessor. Ficar mais organizado na minha mente.



 */
